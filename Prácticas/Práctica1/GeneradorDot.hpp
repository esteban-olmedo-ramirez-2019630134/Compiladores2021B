#ifndef __GENERADORDOT_HPP__
#define __GENERADORDOT_HPP__
#include <map>
#include <string>
#include "AFN.hpp"

class GeneradorDot {
private:
	string generarCodigoTransicion(int u, int v, char c);
	string generarCodigoTransiciones(map<int,map<char,vector<int>>>);
	string generarCodigoEstadosAceptacion(vector<int>);
public:
	string generarDotAFN(AFN*);
};

#endif
