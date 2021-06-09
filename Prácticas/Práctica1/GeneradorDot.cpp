#include "GeneradorDot.hpp"


string GeneradorDot::generarCodigoTransicion(int u, int v, char c) {
	string ret;
	ret += (to_string(u) + " -> " + to_string(v));
	if(c == '#') 
		ret += "[label=<&epsilon;>];";
	else {
		ret += "[label=\"";
		ret += c; 
		ret += "\"];";
	}
	return ret;
}

string GeneradorDot::generarCodigoTransiciones(map<int,map<char,vector<int> > > adyacencia) {
	string ret;
	for(auto x : adyacencia){
		for(auto y : x.second) {
			for(int v : y.second) {
				ret += ("\n\t" + generarCodigoTransicion(x.first, v, y.first));
			}
		}
	}
	return ret;
}
string GeneradorDot::generarCodigoEstadosAceptacion(vector<int> estadosAceptacion) {
	string ret;
	for(int u : estadosAceptacion)
		ret += ("\n\tnode[shape=\"doublecircle\"];" + to_string(u));
	return ret;
}
string GeneradorDot::generarDotAFN(AFN* automata) {
	string ret;
	ret += "digraph {\n\trankdir=LR;\n\tnode[shape=\"point\"]; -1;";
	ret += generarCodigoEstadosAceptacion(automata -> getIdsEstadosAceptacion());
	ret += "\n\tnode[shape=\"circle\"]";
	ret += generarCodigoTransiciones(automata -> generarListaAdyacenciaDeIds());
	ret += "\n\t" + generarCodigoTransicion(-1, automata -> getIdEstadoInicial(), ' ');
	ret += "\n}";
	return ret;
}
