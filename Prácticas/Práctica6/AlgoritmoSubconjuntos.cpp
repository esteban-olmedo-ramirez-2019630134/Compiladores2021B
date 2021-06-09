#include "AlgoritmoSubconjuntos.hpp"
#include "GramaticaLibreDeContexto.hpp"

AlgoritmoSubconjuntos::AlgoritmoSubconjuntos() {}

set<ElementoLR> AlgoritmoSubconjuntos::mover(set<ElementoLR> estado, char simbolo) {
	set<ElementoLR> kernel;
	for(ElementoLR elemento : estado) {
		if(elemento.getEstadoIndicador() == simbolo) {
			elemento.moverIndicador();
			kernel.insert(elemento);
		}
	}
	return kernel;
}
set<ElementoLR> AlgoritmoSubconjuntos::cerradura(set<ElementoLR> kernel, GramaticaLibreDeContexto& gramatica) {
	if(kernelsVisitados.find(kernel) != kernelsVisitados.end())
		return subconjuntos[kernelsVisitados[kernel]];

	kernelsVisitados[kernel] = idKernelActual;
	set<ElementoLR> nuevo;
	queue<ElementoLR> porProcesar;
	for(ElementoLR elemento : kernel)
		porProcesar.push(elemento);
	while(!porProcesar.empty()) {
		ElementoLR u = porProcesar.front();
		porProcesar.pop();
		char c = u.getEstadoIndicador();
		if(gramatica.esNoTerminal(c)) {
			set<ElementoLR> producciones = produccionesIniciales[u.getEstadoIndicador()];
			for(ElementoLR produccion : producciones) {
				porProcesar.push(produccion);
				nuevo.insert(produccion);
			}
		}
	}

	subconjuntos[idKernelActual++] = nuevo;
	return nuevo;
}

void AlgoritmoSubconjuntos::preprocesar(vector<pair<char,string>>& gramatica) {
	/*
	 * Para saber cuáles son los elementos que debemos agregar en el momento que añadimos
	 * todas las producciones de algún elemento en la función cerradura
	 */
	for(auto produccion : gramatica) {
		produccionesIniciales[produccion.first].insert(ElementoLR(produccion, 0));
	}
}

void AlgoritmoSubconjuntos::correrAlgoritmo(GramaticaLibreDeContexto& gramatica){
	vector<pair<char,string>> producciones = gramatica.getProducciones();
	preprocesar(producciones);
	pair<char,string> aux('Z', string(1,producciones[0].first));
	ElementoLR estadoInicialNuevo(aux, 0);
	set<ElementoLR> kernelInicial;
	kernelInicial.insert(estadoInicialNuevo);
	set<ElementoLR> conjuntoInicial = cerradura(kernelInicial, gramatica);
	// Tenemos una pareja que nos dará 
	queue<pair< set<ElementoLR>, set<ElementoLR> >> q; 
	set<set<ElementoLR>> procesados;
	q.push({kernelInicial, conjuntoInicial});
	while(!q.empty()) {
		set<ElementoLR> u = q.front().first;
		procesados.insert(u);
		q.pop();
		int idU = kernelsVisitados[u];
		for(char simbolo : alfabeto) {
			set<ElementoLR> kernelActual = mover(u, simbolo);
			// Llamamos a cerradura para que si aún no se ha calculado 
			// para este kernel, se calcule y se guarde en el map
			set<ElementoLR> conjuntoActual = cerradura(kernelActual, gramatica);
			if(procesados.find(kernelActual) == procesados.end()) {
				procesados.insert(kernelActual);
				q.push({kernelActual,conjuntoActual});
			}
			transiciones[idU][simbolo] = kernelsVisitados[kernelActual];
		}
	}
}

