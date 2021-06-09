#ifndef __TRANSFORMADORAFNAFD_HPP__
#define __TRANSFORMADORAFNAFD_HPP__

#include <map>
#include <set>
#include <vector>
#include <queue>
#include "AFN.hpp"
#include "AFD.hpp"

using namespace std;

class TransformadorAFNAFD {
private:
	/* Nos mapea del kernel de un conjunto de estados de un AFN a un estado del AFD */
	map< set<NodoAFN*>,NodoAFD* > estadosCreados;
	int etiquetaActual;

	set<NodoAFN*> cerraduraEpsilon(set<NodoAFN*>&);
	set<NodoAFN*> mover(set<NodoAFN*>& estado, char simbolo);
public:
	TransformadorAFNAFD();
	AFD *transformarAAFD(AFN*);

};

#endif
