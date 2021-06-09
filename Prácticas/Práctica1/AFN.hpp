#ifndef __AFN_HPP__
#define __AFN_HPP__

#include <set>
#include <queue>
#include <iostream>
#include "NodoAFN.hpp"
using namespace std;
class AFN {
private:
	NodoAFN* estadoInicial;
	set<char> alfabeto;
public:
	AFN(NodoAFN*, set<char>);
	void imprimirDatos();
	string getDot();

	NodoAFN *getEstadoInicial();
	set<char> getAlfabeto();
	map<int,map<char,vector<int>>> generarListaAdyacenciaDeIds();
	vector<int> getIdsEstadosAceptacion();
	int getIdEstadoInicial();
};

#endif
