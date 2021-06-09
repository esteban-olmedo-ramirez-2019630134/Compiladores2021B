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
#include "AFD.hpp"
#include "ConversorDeCadena.hpp"
#include "ConstructorThompson.hpp"
#include "GeneradorDot.hpp"
#include "TransformadorAFNAFD.hpp"
using namespace std;

int main(){
	ConversorDeCadena conversor;
	ConstructorThompson constructor;
	TransformadorAFNAFD transformador;
	GeneradorDot generador;
	string expr;
	// cout << "Ingresa la expesion regular:";
	cin >> expr;
	expr = conversor.convertir(expr);
	AFN *afn = constructor.construirAFN(expr);
	AFD *afd = transformador.transformarAAFD(afn);
	cout << generador.generarDotAFD(afd) << endl;
	return 0;
}

