#ifndef __TABLADEANALISISSINTACTICO_HPP__
#define __TABLADEANALISISSINTACTICO_HPP__

#include <map>
#include <set>
#include <vector>
#include <iostream>
#include "ElementoLR.hpp"
#include "GramaticaLibreDeContexto.hpp"

using namespace std;
class TablaDeAnalisisSintactico{
private:
	map<pair<int,char>,int> irA;
	map<pair<int,char>,vector<pair<char,int>>> accion;
	map<int,set<ElementoLR>> conjuntos;
	GramaticaLibreDeContexto gramatica;
public:
	void aniadirAccion(int, char, char, int);
	void aniadirEntradaIrA(int,char,int);
	void mostrar();
	void setSubconjuntos(map<int, set<ElementoLR>>);
	void imprimirConjuntos();
	void setGramatica(GramaticaLibreDeContexto);
};

#endif
