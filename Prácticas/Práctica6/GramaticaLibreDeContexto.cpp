#include "GramaticaLibreDeContexto.hpp"

GramaticaLibreDeContexto::GramaticaLibreDeContexto() {};
bool GramaticaLibreDeContexto::esTerminal(char c) {
	return terminales.find(c) != terminales.end();
}
bool GramaticaLibreDeContexto::esNoTerminal(char c) {
	return noTerminales.find(c) != terminales.end();
}
char GramaticaLibreDeContexto::getEstadoInicial() {
	return this -> estadoInicial;
}
void GramaticaLibreDeContexto::agregarEstadoTerminal(char c) {
	terminales.insert(c);
}
void GramaticaLibreDeContexto::agregarEstadoNoTerminal(char c) {
	noTerminales.insert(c);
}
void GramaticaLibreDeContexto::setEstadoInicial(char estadoInicial) {
	this -> estadoInicial = estadoInicial;
}
vector<pair<char,string>> GramaticaLibreDeContexto::getProducciones() {
	return this -> producciones;
}
void GramaticaLibreDeContexto::agregarProduccion(char c, string s) {
	producciones.emplace_back(c, s);
};

set<char> GramaticaLibreDeContexto::primero(char estado) {
	set<char> retorno;
	bool conjuntoSinEpsilon = false;
	// Si es un estado terminal tenemos el caso base
	if(esTerminal(estado)) {
		retorno.insert(estado);
		return retorno;
	}
	// Buscamos las producciones del estado en el que estamos
	for(pair<char,string> produccion : producciones) {
		if(produccion.first == estado) {
			for(char c : produccion.second) {
				set<char> auxiliar = primero(c);
				for(char c : auxiliar) 
					if(c != 'E')
						retorno.insert(c);
				// Si llegamos a un estado Y_i tal que primero(Y_i) no tiene a 
				// épsilon entonces dejamos de calcular 
				if(auxiliar.find('E') == auxiliar.end()) {
					conjuntoSinEpsilon = true;
					break;
				}
			}
			// Si todos los elementos Y_i tienen a épsilon, entonces 
			// primero(estado) continene a épsilon
			if(!conjuntoSinEpsilon)
				retorno.insert('E');
		}
	}
	return retorno;
}

set<char> GramaticaLibreDeContexto::siguiente(char estado) {
	set<char> retorno;
	if(estado == estadoInicial)
		retorno.insert('$');
	for(pair<char,string> produccion : producciones) {
		int indx = produccion.second.find(estado);
		if(indx != string::npos) {
			if(produccion
		}
	}
}
