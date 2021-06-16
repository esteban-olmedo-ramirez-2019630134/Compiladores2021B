#ifndef __ELEMENTOLR_HPP__
#define __ELEMENTOLR_HPP__
#include <utility>
#include <string>
using namespace std;
/*
 *	Vamos a representar los estados con letras, un estado final será una
 *	letra minúscula mientras que un estado no final sera una letra mayúscula
 */
class ElementoLR {
private:
	pair<char,string> produccion; // El primer elemento es el estado, y el segundo la produccion
	int indicador;			// Indicador de en donde se encuentra el punto
public:
	ElementoLR(pair<char,string>, int);
	char getEstadoIndicador();
	void moverIndicador();
	bool operator<(const ElementoLR&)const;
	pair<char,string> getProduccion();
};

#endif
