#include <iostream>
#include <string>
#include "AlgoritmoSubconjuntos.hpp"
#include "GramaticaLibreDeContexto.hpp"


using namespace std;

int main() {
	GramaticaLibreDeContexto gramatica;
	AlgoritmoSubconjuntos algo;
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
	algo.correrAlgoritmo(gramatica);
	return 0;
}
