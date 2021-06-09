#ifndef __NODOAFD_HPP__
#define __NODOAFD_HPP__

#include <map>
using namespace std;
class NodoAFD{
private:
	int id;
	map<char,NodoAFD*> listaAdyacencia;
	bool esAceptacion;
public:
	NodoAFD(int id, bool esAceptacion);
	void setEsAceptacion(bool);
	void aniadirArista(NodoAFD*, char);
	int getId();
	map<char,NodoAFD*> getListaAdyacencia();
	bool esEstadoAceptacion();
};
#endif
