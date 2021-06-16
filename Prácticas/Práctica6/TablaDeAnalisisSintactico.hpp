#ifndef __TABLADEANALISISSINTACTICO_HPP__
#define __TABLADEANALISISSINTACTICO_HPP__

#include <map>
#include "ElementoLR.hpp"

class TablaDeAnalisisSintactico{
private:
	map<pair<int,char>,int> irA;
	map<pair<int,char>,vector<pair<char,int>>> accion;
	set<int,set<ElementoLR>>
public:
};

#endif
