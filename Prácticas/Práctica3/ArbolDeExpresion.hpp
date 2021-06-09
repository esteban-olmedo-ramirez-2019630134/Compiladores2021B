#ifndef __ARBOLDEEXPRESION_HPP__
#define __ARBOLDEEXPRESION_HPP__

#include <string>
#include <cassert>
#include "NodoArbolDeExpresion.hpp"
#include <set>
#include "AFD.hpp"

class ArbolDeExpresion {
private:
	const char EPSILON  = '%';
	const char SIMBOLO_FINAL = '@';
	NodoArbolDeExpresion *raiz;
	string expresion;
	int idAct;
	map<NodoArbolDeExpresion*,set<int>> primeros;
	map<NodoArbolDeExpresion*,set<int>> ultimos;

	bool esOperador(char);
	void generarArbol(string);
public:
	ArbolDeExpresion(string);
};

#endif
