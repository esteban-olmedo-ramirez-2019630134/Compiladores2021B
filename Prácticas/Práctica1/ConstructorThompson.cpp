#include "ConstructorThompson.hpp"

// Se reciben dos grafo s de la forma
// x -> |transiciones| -> y
// a -> |transiciones| -> b
// donde x,a son estados iniciales e y,b son estados finales y se
// devuelve una construcción de Thompson de la forma
// x -> |transiciones| -> a -> | transiciones| -> b
ConstructorThompson::ConstructorThompson() : idActual(0) {}
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarConcatenacion(pair<NodoAFN*,NodoAFN*> A,pair<NodoAFN*,NodoAFN*> B) {
	*(A.second) = *(B.first);
	return {A.first, B.second};
}

// Se reciben dos grafo s de la forma
// x -> |transiciones| -> y
// a -> |transiciones| -> b
// donde x,a son estados iniciales e y,b son estados finales y se
// devuelve una construcción de Thompson de la forma
//   __épsilon -> x -> |transiciones| -> y __épsilon_
//  /                                                \
// z                                                  w 
//  \__épsilon -> a -> |transiciones| -> b __épsilon_/
//
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarDisyuncion(pair<NodoAFN*,NodoAFN*> A,pair<NodoAFN*,NodoAFN*> B) {
	NodoAFN *inicio = new NodoAFN(idActual++);
	NodoAFN *fin = new NodoAFN(idActual++);
	if(inicio == nullptr || fin == nullptr) {
		exit(EXIT_FAILURE);
	}
	inicio -> aniadirArista('#', A.first);
	inicio -> aniadirArista('#', B.first);
	A.second -> aniadirArista('#', fin);
	B.second -> aniadirArista('#', fin);
	return {inicio, fin};
}
// Se recibe un grafo de la forma
// x -> |transiciones| -> y
// donde x es el estado inicial e y es el estado final y se
// devuelve un nodo de la forma
//   		 ________épsilon____
//   		/                   \
// z -épsilon- x -|transiciones| --> y -épsilon -> w
//  \__________________épsilon____________________/
//
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarCerraduraEstrella(pair<NodoAFN*,NodoAFN*> A) {
	NodoAFN *inicio = new NodoAFN(idActual++);
	NodoAFN *fin = new NodoAFN(idActual++);
	if(inicio == nullptr || fin == nullptr) {
		exit(EXIT_FAILURE);
	}
	inicio -> aniadirArista('#', A.first);
	A.second -> aniadirArista('#', A.first);
	A.second -> aniadirArista('#', fin);
	inicio -> aniadirArista('#', fin);
	return {inicio, fin};
}
// En el caso base devolvemos un grafo de la forma
// x - símbolo -> y, donde x e y son nodos de un AFN
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarCasoBase(char simbolo) {
	NodoAFN* inicio = new NodoAFN(idActual++);
	NodoAFN* fin = new NodoAFN(idActual++);
	if(inicio == nullptr || fin == nullptr) {
		exit(EXIT_FAILURE);
	}
	inicio -> aniadirArista(simbolo, fin);
	return {inicio, fin};
}
AFN *ConstructorThompson::construirAFN(string expresion) {
	// En esta pila vamos guardando nodo inicial y final de la construcción de 
	// Thompson actual
	stack< pair<NodoAFN*,NodoAFN*> > q;
	set<char> alfabeto;
	pair<NodoAFN*,NodoAFN*> A;
	pair<NodoAFN*,NodoAFN*> B;
	// Recorremos la expresión que se encuentra en notación postfija
	for(char c : expresion) {
		switch(c) {
			case '|': 
				// Sacamos las 2 últimas parejas de nodos que hemos calculado
				// ya que tenemos una operación binaria
				B = q.top();
				q.pop();
				A = q.top();
				q.pop();
				q.push(generarDisyuncion(A, B));
				break;
			case '*':
				// Sólo sacamos la última expresión porque tenemos una
				// expresión unaria
				A = q.top();
				q.pop();
				q.push(generarCerraduraEstrella(A));
				break;
			case '.':
				B = q.top();
				q.pop();
				A = q.top();
				q.pop();
				q.push(generarConcatenacion(A, B));
				break;
			default:
				q.push(generarCasoBase(c));
				alfabeto.insert(c);
		}
	}
	auto C = q.top();
	C.second -> setEsAceptacion(true);
	q.pop();
	if(q.size() != 1) {
		exit(EXIT_FAILURE);
	}
	return new AFN(C.first, alfabeto);
}
