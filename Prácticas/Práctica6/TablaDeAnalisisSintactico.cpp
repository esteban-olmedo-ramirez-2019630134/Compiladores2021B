#include "TablaDeAnalisisSintactico.hpp"

void TablaDeAnalisisSintactico::aniadirAccion(int fila, char columna, char accion, int destino) {
	pair<int,char> aux = {fila, columna};
	this -> accion[aux].push_back({accion, destino});
}
void TablaDeAnalisisSintactico::aniadirEntradaIrA(int fila, char columna, int destino) {
	pair<int,char> aux = {fila, columna};
	irA[aux] = destino;
}
void TablaDeAnalisisSintactico::mostrar() {
	cout << "Mostrando irA: " << endl;
	for(auto actual : irA){
		cout << "irA(" << actual.first.first << ' ' << actual.first.second << ") = " << actual.second << endl;
	}
	cout << "Mostrando accion: " << endl;
	for(auto actual : accion) {
		cout << "accion(" << actual.first.first << ',' << actual.first.second << "):{";
		for(auto auxiliar : actual.second) {
			cout << '{' << auxiliar.first << auxiliar.second << '}';
		}
		cout << "}" << endl;
	}
	vector<pair<char,string>> prod = gramatica.getProducciones();
	for(int i = 0; i < prod.size(); i++) {
		cout << i << " : " << prod[i].first << " -> " << prod[i].second << endl;
	}
}

void TablaDeAnalisisSintactico::setSubconjuntos(map<int, set<ElementoLR>> conjuntos) {
	this -> conjuntos = conjuntos;
}

void TablaDeAnalisisSintactico::imprimirConjuntos() {
	for(pair<int,set<ElementoLR>> actual : conjuntos) {
		cout << actual.first << ": ";
		for(ElementoLR elemento  : actual.second) {
			cout << "\t";
			elemento.imprimir();
		}
		cout << '\n';
	}
}
void TablaDeAnalisisSintactico::setGramatica(GramaticaLibreDeContexto gramatica) {
	this -> gramatica = gramatica;
}
