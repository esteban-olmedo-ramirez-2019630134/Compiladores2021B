#include "TransformadorAFNAFD.hpp"


set<NodoAFN*> TransformadorAFNAFD::cerraduraEpsilon(set<NodoAFN*>& kernel) {
	/* Como no hemos visitado este kernel, crearemos un nuevo estado */
	if(estadosCreados.find(kernel) != estadosCreados.end())
		return set<NodoAFN*>();
	bool esAceptacion = false;

	set<NodoAFN*> nodosVisitados;
	queue<NodoAFN*> q;
	for(NodoAFN* u : kernel) {
		nodosVisitados.insert(u);
		q.push(u);
	}
	while(!q.empty()) {
		NodoAFN *u = q.front(); q.pop();
		if(u -> esEstadoAceptacion()) esAceptacion = true;
		for(NodoAFN* v : u -> getTransicion('#')) {
			if(nodosVisitados.find(v) == nodosVisitados.end()) {
				nodosVisitados.insert(v);
				q.push(v);
			}
		}
	}
	estadosCreados[kernel] = new NodoAFD(etiquetaActual++, esAceptacion);
	return nodosVisitados;
}
set<NodoAFN*> TransformadorAFNAFD::mover(set<NodoAFN*>& estado, char simbolo) {
	set<NodoAFN*> kernel;
	for(NodoAFN *u : estado){
		vector<NodoAFN*> hacia = u -> getTransicion(simbolo);
		for(NodoAFN* v : hacia)
			kernel.insert(v);
	}
	return kernel;
}

TransformadorAFNAFD::TransformadorAFNAFD() : etiquetaActual(0) {}

AFD *TransformadorAFNAFD::transformarAAFD(AFN *automata) {
	etiquetaActual = 0;
	estadosCreados.clear();

	NodoAFD *A = NULL;
	NodoAFD *B = NULL;
	NodoAFD *estadoInicialNuevo = NULL;

	set<NodoAFN*> kernel;
	set<NodoAFN*> conjuntoEstadoActual; 	/* Guardará todos los estados de la cerradura epsilon del kernel */

	queue< pair< set<NodoAFN*> , set<NodoAFN*> > > q;
	set<NodoAFD*> visitados;

	kernel.insert(automata -> getEstadoInicial());
	conjuntoEstadoActual = cerraduraEpsilon(kernel);
	estadoInicialNuevo = estadosCreados[kernel];

	q.push({kernel, conjuntoEstadoActual});
	visitados.insert(estadoInicialNuevo);

	while(!q.empty()) {
		tie(kernel, conjuntoEstadoActual) = q.front(); q.pop();
		A = estadosCreados[kernel];
		for(char c : automata -> getAlfabeto()){
			set<NodoAFN*> kernelNuevo = mover(conjuntoEstadoActual, c);
			set<NodoAFN*> conjuntoEstadoNuevo = cerraduraEpsilon(kernelNuevo);

			B = estadosCreados[kernelNuevo];
			A -> aniadirArista(B, c);
			/* La primera vez que veamos a B, no estará en los visitados, esto quiere decir 
			 * que no hemos creado un estado asociado a su kernel, por lo tanto lo meteremos
			 * a la cola, pero en el momento que nos volvamos a encontrar con el kernel de este 
			 * estado podremos asegurar que ya lo hemos encolado o ya ha sido visitado, por lo
			 * que no es necesario hacer un mapeo del kernel a la cerradura epsilon 
			 */
			if(visitados.find(B) == visitados.end()) {
				q.push({kernelNuevo, conjuntoEstadoNuevo});
				visitados.insert(B);
			}
		}
	}

	return new AFD(estadoInicialNuevo, automata -> getAlfabeto());
}
