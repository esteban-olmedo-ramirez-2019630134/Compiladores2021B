#ifndef __NODOARBOLDEEXPRESION_HPP__
#define __NODOARBOLDEEXPRESION_HPP__

class NodoArbolDeExpresion {
private:
	bool anulable;
	char caracter;
	int id;
	NodoArbolDeExpresion *hijoDerecho;
	NodoArbolDeExpresion *hijoIzquierdo;
public:
	NodoArbolDeExpresion(bool,char,int);
	void setHijoIzquierdo(NodoArbolDeExpresion*);
	void setHijoDerecho(NodoArbolDeExpresion*);
	bool esHoja();
	char getCaracter();
};

#endif
