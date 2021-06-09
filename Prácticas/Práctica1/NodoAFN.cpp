#include "NodoAFN.hpp"

NodoAFN::NodoAFN(int id) : id(id) {}

void NodoAFN::aniadirArista(char c, NodoAFN* node){
	this -> listaAdyacencia[c].push_back(node);
}
void NodoAFN::setEsAceptacion(bool esAceptacion){
	this -> esAceptacion = esAceptacion;
}
int NodoAFN::getId(){
	return this -> id;
}
map<char,vector<NodoAFN*>> NodoAFN::getListaAdyacencia(){
	return this -> listaAdyacencia;
}
vector<NodoAFN*> NodoAFN::getTransicion(char c){
	if(this -> listaAdyacencia.find(c) != this -> listaAdyacencia.end())
		return this -> listaAdyacencia[c];
	else
		return vector<NodoAFN*>();
}
bool NodoAFN::esEstadoAceptacion(){
	return this -> esAceptacion;
}
