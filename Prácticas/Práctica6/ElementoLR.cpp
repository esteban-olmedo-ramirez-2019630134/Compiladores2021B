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
		return this -> indicador < lr.indicador;
	}
	return this -> produccion.first < lr.produccion.first;
}

pair<char,string> ElementoLR::getProduccion() {
	return this -> produccion;
}
