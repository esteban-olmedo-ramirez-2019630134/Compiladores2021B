#include "ConstructorThompson.hpp"

ConstructorThompson::ConstructorThompson() : idActual(0) {}
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarConcatenacion(pair<NodoAFN*,NodoAFN*> A,pair<NodoAFN*,NodoAFN*> B) {
	*(A.second) = *(B.first);
	return {A.first, B.second};
}
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarDisyuncion(pair<NodoAFN*,NodoAFN*> A,pair<NodoAFN*,NodoAFN*> B) {
	NodoAFN *inicio = new NodoAFN(idActual++);
	NodoAFN *fin = new NodoAFN(idActual++);
	inicio -> aniadirArista('#', A.first);
	inicio -> aniadirArista('#', B.first);
	A.second -> aniadirArista('#', fin);
	B.second -> aniadirArista('#', fin);
	return {inicio, fin};
}
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarCerraduraEstrella(pair<NodoAFN*,NodoAFN*> A) {
	NodoAFN *inicio = new NodoAFN(idActual++);
	NodoAFN *fin = new NodoAFN(idActual++);
	inicio -> aniadirArista('#', A.first);
	A.second -> aniadirArista('#', A.first);
	A.second -> aniadirArista('#', fin);
	inicio -> aniadirArista('#', fin);
	return {inicio, fin};
}
pair<NodoAFN*, NodoAFN*> ConstructorThompson::generarCasoBase(char simbolo) {
	NodoAFN* inicio = new NodoAFN(idActual++);
	NodoAFN* fin = new NodoAFN(idActual++);
	inicio -> aniadirArista(simbolo, fin);
	return {inicio, fin};
}
AFN *ConstructorThompson::construirAFN(string expresion) {
	stack< pair<NodoAFN*,NodoAFN*> > q;
	set<char> alfabeto;
	pair<NodoAFN*,NodoAFN*> A;
	pair<NodoAFN*,NodoAFN*> B;
	for(char c : expresion) {
		switch(c) {
			case '|': 
				B = q.top();
				q.pop();
				A = q.top();
				q.pop();
				q.push(generarDisyuncion(A, B));
				break;
			case '*':
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
	return new AFN(C.first, alfabeto);
}
