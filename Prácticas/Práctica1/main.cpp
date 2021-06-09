#include <vector>
#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <cassert>
#include <algorithm>
#include <utility>
#include <set>
#include "AFN.hpp"
#include "ConversorDeCadena.hpp"
#include "ConstructorThompson.hpp"
#include "GeneradorDot.hpp"
using namespace std;

int main(){
	ConversorDeCadena conversor;
	ConstructorThompson constructor;
	GeneradorDot generador;
	string expr;
	// cout << "Ingresa la expesion regular:";
	cin >> expr;
	expr = conversor.convertir(expr);
	AFN *automata = constructor.construirAFN(expr);
	cout << generador.generarDotAFN(automata) << endl;
	return 0;
}

