#include "AlgoritmoConstruccionLR0.hpp"

void AlgoritmoConstruccionLR0::calcularReducir(TablaDeAnalisisSintactico &tabla, GramaticaLibreDeContexto& gl) {
	int id = 0;
	map<pair<char,string>,int> idProduccion;
	for(pair<char,string> produccion : gl.getProducciones()) {
		idProduccion[produccion] = id++;
	}
	for(pair<int,set<ElementoLR>> subconjunto : subconjuntos ) {
		for(ElementoLR elemento : subconjunto) {
			// Tenemos a A -> alpha.
			if(elemento.getEstadoIndicador() == -1) {
				pair<char,string> produccion = [elemento.getProduccion()];
				id = idProduccion[produccion];
				// Para cada elemento en siguiente(A) añadimos la acción
				// r(A -> alpha) en la fila del subconjunto actual
				for(char c : primeros[produccion.first]) {
					tabla.aniadirAccion(subconjunto.first, c, 'r', id);
				}
			}
		}
	}
}

void AlgoritmoConstruccionLR0::calcularPrimeros(GramaticaLibreDeContexto& gl) {
	for(char estado : gl.getAlfabeto()) {
		if(gl.esTerminal(estado)) {
			primeros[estado] = gl.primero(estado);
		}
	}
}

void AlgoritmoConstruccionLR0::calcularDesplazarEIrA(TablaDeAnalisisSintactico& tabla, GramaticaLibreDeContexto& gl) {
	for(pair<int,map<char,int>> transicion : trancisiones) {
		for(pair<char,int> actual : transicion.second){
			if(gl.esNoTerminal(actual.first)) {
				tabla.aniadirAccion(transicion.first, actual.first, 'd', actual.second);
			}
			else {
				tabla.aniadirEntradaIrA(transicion.first, actual.first, actual.second);
			}
		}
	}
}

TablaDeAnalisisSintactico AlgoritmoConstruccionLR0::correrAlgoritmo(GramaticaLibreDeContexto gl) {
	AlgoritmoSubconjuntos algoritmoSubconjuntos;
	algoritmoSubconjuntos.correrAlgoritmo(gl);
	subconjuntos = algoritmoSubconjuntos.getSubconjuntos();
	transiciones = algoritmoSubconjuntos.getTransiciones();
	TablaDeAnalisisSintactico retorno;
	calcularPrimeros(gl);
	calcularReducir(tabla, gl);
	calcularDesplazarEIrA(tabla,gl);
	return retorno;
}
