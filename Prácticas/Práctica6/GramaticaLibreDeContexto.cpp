#include "GramaticaLibreDeContexto.hpp"

GramaticaLibreDeContexto::GramaticaLibreDeContexto() {};
bool GramaticaLibreDeContexto::esTerminal(char c) {
	return terminales.find(c) != terminales.end();
}
bool GramaticaLibreDeContexto::esNoTerminal(char c) {
	return noTerminales.find(c) != noTerminales.end();
}
char GramaticaLibreDeContexto::getEstadoInicial() {
	return this -> estadoInicial;
}
void GramaticaLibreDeContexto::agregarEstadoTerminal(char c) {
	alfabeto.push_back(c);
	terminales.insert(c);
}
void GramaticaLibreDeContexto::agregarEstadoNoTerminal(char c) {
	alfabeto.push_back(c);
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

set<char> GramaticaLibreDeContexto::primero(string estado, set<string> &visitados) {
	set<char> retorno;
	bool conjuntoSinEpsilon = false;
	if(visitados.find(estado) != visitados.end()) {
		return retorno;
	}
	visitados.insert(estado);
	// Si es un estado terminal tenemos el caso base
	if(esTerminal(estado[0])) {
		retorno.insert(estado[0]);
		return retorno;
	}
	// Buscamos las producciones del estado en el que estamos
	for(char actual : estado) {
		for(pair<char,string> produccion : producciones) {
			if(produccion.first == actual) {
				for(char c : produccion.second) {
					set<char> auxiliar = primero(string(1,c), visitados);
					for(char c : auxiliar) {
						if(c != 'E') {
							retorno.insert(c);
						}
					}
					// Si llegamos a un estado Y_i tal que primero(Y_i) no tiene a 
					// épsilon entonces dejamos de calcular 
					if(auxiliar.find('E') == auxiliar.end()) {
						conjuntoSinEpsilon = true;
						break;
					}
				}
				// Si todos los elementos Y_i tienen a épsilon, entonces 
				// primero(estado) continene a épsilon
				if(!conjuntoSinEpsilon) {
					retorno.insert('E');
				}
			}
		}
		if(conjuntoSinEpsilon) {
			break;
		}
	}
	if(!conjuntoSinEpsilon) {
		retorno.insert('E');
	}
	return retorno;
}

set<char> GramaticaLibreDeContexto::siguiente(char estado, map<char,set<char>>& visitados) {
	set<char> retorno;
	visitados[estado] = retorno;
	// Si el estado actual es el estado inicial agregamos $
	if(estado == estadoInicial) {
		retorno.insert('$');
	}
	// Si es un estado terminal, estamos en un caso base Sigiente(estado) = {estado}
	if(esTerminal(estado)) {
		retorno.insert(estado);
	}
	// Si no es estado terminal
	else {
		// Para cada producción
		for(pair<char,string> produccion : producciones) {
			for(int i = 0; i < produccion.second.size(); i++) {
				// Si la producción sobre la que iteramos produce el estado del que
				// estamos calculando siguiente
				if(produccion.second[i] == estado) {
					// Si tenemos una producción de la forma A -> alphaB
					// donde B es el estado del que estamos calculando siguiente,
					// entonces calculamos siguiente(A)
					if(i + 1 == produccion.second.size()){
						set<char> auxiliar;
						auxiliar = siguiente(produccion.first);
						for(char c : auxiliar) {
							retorno.insert(c);
						}
					}
					// Producción de la forma A -> alphaBbeta, entonces calculamos 
					// primero(beta)
					else {
						set<char> auxiliar;
						set<string> vis;
						auxiliar = primero(produccion.second.substr(i+1,produccion.second.size()-i+1), vis);
						for(char c : auxiliar) {
							if(c != 'E') {
								retorno.insert(c);
							}
						}
						// Si primero(beta) contiene a épsilon, entonces calculamos 
						// siguiente(A)
						if(retorno.find('E') != retorno.end()) {
							set<string> vis;
							auxiliar = primero(string(1,produccion.first), vis);
							for(char c : auxiliar) {
								retorno.insert(c);
							}
						}
					}
				}
			}
		}
	}
	visitados[estado] = retorno;
	return retorno;
}

set<char> GramaticaLibreDeContexto::siguiente(char estado) {
	map<char,set<char>> visitados;
	return siguiente(estado, visitados);
}

vector<char> GramaticaLibreDeContexto::getAlfabeto() {
	return alfabeto;
}
