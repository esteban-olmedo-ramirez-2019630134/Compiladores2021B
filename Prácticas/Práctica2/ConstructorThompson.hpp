#ifndef __CONSTRUCTORTHOMPSON_HPP__
#define __CONSTRUCTORTHOMPSON_HPP__

#include <string>
#include <stack>
#include <set>
#include "AFN.hpp"

using namespace std;
class ConstructorThompson {
private:
	int idActual;
	pair<NodoAFN*, NodoAFN*> generarConcatenacion(pair<NodoAFN*,NodoAFN*>,pair<NodoAFN*,NodoAFN*>);
	pair<NodoAFN*, NodoAFN*> generarDisyuncion(pair<NodoAFN*,NodoAFN*>,pair<NodoAFN*,NodoAFN*>);
	pair<NodoAFN*, NodoAFN*> generarCerraduraEstrella(pair<NodoAFN*,NodoAFN*>);
	pair<NodoAFN*, NodoAFN*> generarCasoBase(char);
public:
	ConstructorThompson();
	AFN *construirAFN(string);
};

#endif
