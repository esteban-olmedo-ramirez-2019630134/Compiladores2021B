#include "ArbolDeExpresion.hpp"

/*
 * Suponemos que la expresión que nos envían ya está en notación postfija
 * y que aún no se le ha añadido el símbolo final
*/
ArbolDeExpresion::ArbolDeExpresion() {}

bool ArbolDeExpresion::esOperador(char c) {
	return c == '|' || c == '.' || c == '*';
}
void ArbolDeExpresion::generarArbol(string expresion) {
	stack<NodoArbolDeExpresion*> pila;
	NodoArbolDeExpresion* a;
	NodoArbolDeExpresion* b;
	this -> expresion = expresion + SIMBOLO_FINAL + ".";
	for(char c : expresion) {
		if(esOperador(c)) {
			a = pila.top(); pila.pop();
			// Operador unario
			if(c == '*') {
				NodoArbolDeExpresion *nuevo = new NodoArbolDeExpresion(false, '*', idAct++);
				nuevo -> setHijoIzquierdo(a);
				pila.push(nuevo);
			}
			// Operador binario
			else{
				b = pila.top(); pila.pop();
				NodoArbolDeExpresion *nuevo = new NodoArbolDeExpresion(false, c, idAct++);
				nuevo -> setHijoIzquierdo(a);
				nuevo -> setHijoDerecho(b);
				pila.push(nuevo);
			}
		}
		// Todos los operandos van a la pila
		else {
			a = new NodoArbolDeExpresion(false, c, idAct++);
			pila.push(a);
		}
	}
	this -> raiz = pila.top(); pila.pop();
	assert(pila.empty());
}

set<int> generarUltimos(NodoArbolDeExpresion* raiz) {
	set<int> izquierda, derecha;
	if(raiz == nullptr) return izquierda;
	if(raiz -> esHoja()) {
		izquierda.insert(raiz -> getCaracter());
		return izquierda;
	}
	derecha = generarUltimos(raiz -> getHijoDerecho());
	if(raiz -> getHijoDerecho() != nullptr && raiz -> getHijoDerecho() -> getAnulable()) {
		izquierda = generarUltimos(raiz -> getHijoIzquierdo());
		for(auto x : izquierda)
			derecha.insert(x);
	}
	this -> ultimos[raiz] = derecha;
	return derecha;

}

set<int> generarPrimeros(NodoArbolDeExpresion* raiz) {
	set<int> izquierda, derecha;
	if(raiz == nullptr) return izquierda;
	if(raiz -> esHoja()) {
		izquierda.insert(raiz -> getCaracter());
		return izquierda;
	}
	izquierda = generarPrimeros(raiz -> getHijoIzquierdo());
	if(raiz -> getHijoIzquierdo() != nullptr && raiz -> getHijoIzquierdo() -> getAnulable()) {
		derecha = generarPrimeros(raiz -> getHijoDerecho());
		for(auto x : derecha)
			izquierda.insert(x);
	}
	this -> primeros[raiz] = izquierda;
	return izquierda;

}
void marcarAnulables(NodoArbolDeExpresion* raiz) {
	if(raiz == nullptr) return;
	if(raiz -> esHoja())
		raiz -> setAnulable(raiz -> getCaracter() != EPSILON);

	marcarAnulables(raiz -> getHijoIzquierdo())
	marcarAnulables(raiz -> getHijoDerecho())
	bool esAnulableDerecha = ( raiz -> getHijoDerecho() != nullptr? 
			raiz -> getHijoDerecho() -> esAnulable() : 
			true);
	bool esAnulableIzquierda = ( raiz -> getHijoIzquierdo() != nullptr? 
			raiz -> getHijoIzquierdo() -> esAnulable() : 
			true);

	if(raiz -> getCaracter() == '.') 
		raiz -> setAnulable(esAnulableDerecha && esAnulableIzquierda);
	if(raiz -> getCaracter() == '|') 
		raiz -> setAnulable(esAnulableDerecha || esAnulableIzquierda);
	if(raiz -> getCaracter() == '*')
		raiz -> setAnulable(esAnulableIzquierda);
}

AFD *ArbolDeExpresion::convertirExpresionAAFD(string expresion) {
	generarArbol(expresion);
	marcarAnulables(this -> raiz);
	generarPrimeros(this -> raiz);
	generarUltimos(this -> raiz);
}


