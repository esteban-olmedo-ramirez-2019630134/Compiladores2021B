#ifndef __GRAMATICALIBREDECONTEXTO_HPP__
#define __GRAMATICALIBREDECONTEXTO_HPP__

#include <set>
#include <vector>
#include <utility>
#include <string>
#include <map>
#include <iostream>

using namespace std;

class GramaticaLibreDeContexto {
private:
	set<char> terminales;
	set<char> noTerminales;
	char estadoInicial;
	vector<pair<char,string>> producciones;
	set<char> siguiente(char,map<char,set<char>>&);
	vector<char> alfabeto;
public:
	GramaticaLibreDeContexto();
	bool esTerminal(char);
	bool esNoTerminal(char);
	char getEstadoInicial();
	void agregarEstadoTerminal(char);
	void agregarEstadoNoTerminal(char);
	void setEstadoInicial(char);
	vector<pair<char,string>> getProducciones();
	void agregarProduccion(char, string);
	set<char> siguiente(char);
	set<char> primero(string, set<string>&);
	vector<char> getAlfabeto();
};


#endif
