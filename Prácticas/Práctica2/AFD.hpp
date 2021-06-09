#ifndef __AFD_HPP__
#define __AFD_HPP__
#include <set>
#include <iostream>
#include <queue>
#include <map>
#include "NodoAFD.hpp"

using namespace std;
class AFD {
private:
	NodoAFD *estadoInicial;
	set<char> alfabeto;
public:
	AFD(NodoAFD *estadoInicial, set<char> alfabeto);
	void imprimirInfo();
	vector<int> getIdsEstadosAceptacion();
	int getIdEstadoInicial();
	map<int,map<char,int>> generarListaAdyacenciaDeIds();
};
#endif
