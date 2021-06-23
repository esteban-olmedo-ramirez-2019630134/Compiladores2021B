#include "ElementoLR.hpp"


ElementoLR::ElementoLR(pair<char,string> produccion, int indicador) : 
	produccion(produccion), indicador(indicador) {}

char ElementoLR::getEstadoIndicador() {
	if(indicador < produccion.second.size())
		return produccion.second[indicador];
	return -1;
}

void ElementoLR::moverIndicador() {
	indicador++;
}

bool ElementoLR::operator<(const ElementoLR& lr) const{
	if(this -> produccion.first == lr.produccion.first) {
		if(this -> produccion.second == lr.produccion.second){
			return this -> indicador < lr.indicador;
		}
		else{
			return produccion.second < lr.produccion.second;
		}
	}
	else{
		return this -> produccion.first < lr.produccion.first;
	}
}

pair<char,string> ElementoLR::getProduccion() {
	return this -> produccion;
}

void ElementoLR::imprimir() {
	cout << produccion.first << " -> ";
	for(int i = 0; i < produccion.second.size(); i++) {
		if(i == indicador) {
			cout << ".";
		}
		cout << produccion.second[i];
	}
	if(indicador == produccion.second.size())
		cout << ".";
	cout << '\n';
}
