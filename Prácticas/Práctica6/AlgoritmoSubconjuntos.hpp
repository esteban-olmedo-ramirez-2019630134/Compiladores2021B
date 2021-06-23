#ifndef __ALGORITMOSUBCONJUNTOS_HPP__
#define __ALGORITMOSUBCONJUNTOS_HPP__

#include "ElementoLR.hpp"
#include "GramaticaLibreDeContexto.hpp"
#include <map>
#include <set>
#include <vector>
#include <utility>
#include <queue>
#include <iostream>

using namespace std;

class AlgoritmoSubconjuntos{
private:
	map<set<ElementoLR>,int> kernelsVisitados;
	map<int,set<ElementoLR>> subconjuntos;
	int idKernelActual;
	map<int,map<char,int>> transiciones;
	map<char,set<ElementoLR>> produccionesIniciales;
public:
	AlgoritmoSubconjuntos();
	void correrAlgoritmo(GramaticaLibreDeContexto&);
	void preprocesar(vector<pair<char,string>>&);
	set<ElementoLR> cerradura(set<ElementoLR>,GramaticaLibreDeContexto&);
	set<ElementoLR> mover(set<ElementoLR>, char);
	map<int,set<ElementoLR>> getSubconjuntos();
	map<int,map<char,int>> getTransiciones();
};

#endif
