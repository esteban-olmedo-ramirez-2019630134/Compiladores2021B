#ifndef __NODOAFN_HPP__
#define __NODOAFN_HPP__

#include <set>
#include <vector>
#include <map>

using namespace std;

class NodoAFN{
private:
	map< char, vector<NodoAFN*> > listaAdyacencia;
	int id;
	bool esAceptacion;
public:
	NodoAFN(int);
	void aniadirArista(char, NodoAFN*);
	void setEsAceptacion(bool);
	int getId();
	map<char,vector<NodoAFN*>> getListaAdyacencia();
	vector<NodoAFN*> getTransicion(char);
	bool esEstadoAceptacion();
};

#endif
