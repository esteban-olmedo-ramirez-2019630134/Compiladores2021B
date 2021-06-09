#ifndef __ALGORITMOSUBCONJUNTOS_HPP__
#define __ALGORITMOSUBCONJUNTOS_HPP__

#include "ElementoLR.hpp"
#include "GramaticaLibreDeContexto.hpp"
#include <map>
#include <set>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

class AlgoritmoSubconjuntos{
private:
	vector<char> alfabeto;
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
};

#endif
