#ifndef __CONVERSORDECADENA_HPP__
#define __CONVERSORDECADENA_HPP__

#include <vector>
#include <string>
#include <stack>
#include <map>
using namespace std;
class ConversorDeCadena {
private: 
	map<char,int> prioridadDeOperador;

	bool esConcatenacion(char, char);
	bool esOperando(char);
	bool esOperador(char);

	string ponerSimbolosDeConcatenacion(string);
	string ejecutarPatioDeClasificacion(string);
public:
	ConversorDeCadena();
	string convertir(string);
};

#endif
