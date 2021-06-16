#ifndef __ALGORITMOCONSTRUCCIONLR0_HPP__
#define __ALGORITMOCONSTRUCCIONLR0_HPP__
#include "AlgoritmoSubconjuntos.hpp"
#include "GramaticaLibreDeContexto.hpp"
#include "TablaDeAnalisisSintactico.hpp"
class AlgoritmoConstruccionLR0 {
private:
	map<int,set<ElementoLR>> subconjuntos;
	map<int,map<char,int>> transiciones;
	map<char,set<char>> primeros;
	void calcularReducir(TablaDeAnalisisSintactico&,GramaticaLibreDeContexto&);
	void calcularPrimeros(GramaticaLibreDeContexto&);
public:
	AlgoritmoConstruccionLR0();
	TablaDeAnalisisSintactico correrAlgoritmo(GramaticaLibreDeContexto);
};
#endif
