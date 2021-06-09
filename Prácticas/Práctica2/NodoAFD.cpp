#include "NodoAFD.hpp"

NodoAFD::NodoAFD(int id, bool esAceptacion) : id(id), esAceptacion(esAceptacion) {}
void NodoAFD::setEsAceptacion(bool esAceptacion){
	this -> esAceptacion = esAceptacion;
}
void NodoAFD::aniadirArista(NodoAFD* v, char simbolo) {
	this -> listaAdyacencia[simbolo] = v;
}
int NodoAFD::getId() {
	return this -> id;
}
map<char,NodoAFD*> NodoAFD::getListaAdyacencia() {
	return this -> listaAdyacencia;
}
bool NodoAFD::esEstadoAceptacion(){
	return this -> esAceptacion;
}
