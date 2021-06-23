#include <iostream>
#include <string>
#include "AlgoritmoSubconjuntos.hpp"
#include "GramaticaLibreDeContexto.hpp"
#include "AlgoritmoConstruccionLR0.hpp"
#include "TablaDeAnalisisSintactico.hpp"
#include <set>


using namespace std;

int main() {
	GramaticaLibreDeContexto gramatica;
	AlgoritmoSubconjuntos algoSubconjuntos;
	int n;
	cout << "Ingresa el número de estados terminales: ";
	cin >> n;
	cout << "Ingresa los estados terminales: ";
	for(int i = 0; i < n; i++) {
		char estado;
		cin >> estado;
		gramatica.agregarEstadoTerminal(estado);
	}
	cout << "Ingresa el número de estados no terminales: ";
	cin >> n;
	cout << "Ingresa los estados no terminales: ";
	for(int i = 0; i < n; i++) {
		char estado;
		cin >> estado;
		gramatica.agregarEstadoNoTerminal(estado);
	}
	cout << "Ingrese el numero de producciones: ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		char c;
		cout << "Ingrese la produccion dejando un espacio entre el estado y lo que produce: ";
		cin >> c >> s;
		gramatica.agregarProduccion(c, s);
	}
	// set<char> aux = gramatica.primero(string("B"));
	// for(char c : aux) cout << c << ' '; cout << '\n';
	algoSubconjuntos.correrAlgoritmo(gramatica);
	AlgoritmoConstruccionLR0 algoConst(algoSubconjuntos.getSubconjuntos(), algoSubconjuntos.getTransiciones());
	TablaDeAnalisisSintactico tabla = algoConst.correrAlgoritmo(gramatica);
	tabla.mostrar();
	cout << "----- Subconjuntos ----" << endl;
	tabla.imprimirConjuntos();
	return 0;
}
