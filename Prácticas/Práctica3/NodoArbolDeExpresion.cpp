#include "NodoArbolDeExpresion.hpp"


NodoArbolDeExpresion::NodoArbolDeExpresion(bool anulable, char caracter, int id) : 
	anulable(anulable), caracter(caracter), id(id), hijoDerecho(nullptr), hijoIzquierdo(nullptr) {}
	
void NodoArbolDeExpresion::setHijoIzquierdo(NodoArbolDeExpresion *hijoIzquierdo) {
	this -> hijoIzquierdo = hijoIzquierdo;
}

void NodoArbolDeExpresion::setHijoDerecho(NodoArbolDeExpresion *hijoDerecho) {
	this -> hijoDerecho = hijoDerecho;
}

bool NodoArbolDeExpresion::esHoja() {
	return this -> hijoDerecho == nullptr && this -> hijoIzquierdo == nullptr;
}

char NodoArbolDeExpresion::getCaracter() {
	return this -> caracter;
}

void NodoArbolDeExpresion::setAnulable(bool anulable) {
	this -> anulable = anulable;
}

NodoArbolDeExpresion* NodoArbolDeExpresion::getHijoIzquierdo() {
	return this -> hijoIzquierdo;
}

NodoArbolDeExpresion* NodoArbolDeExpresion::getHijoDerecho() {
	return this -> hijoDerecho;
}
