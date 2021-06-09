#include "AFD.hpp"

AFD::AFD(NodoAFD *estadoInicial, set<char> alfabeto) : estadoInicial(estadoInicial), alfabeto(alfabeto) {}

void AFD::imprimirInfo(){
	queue<NodoAFD*> q;
	set<NodoAFD*> visitados;
	q.push(estadoInicial);
	visitados.insert(estadoInicial);
	while(!q.empty()){
		NodoAFD* u = q.front(); q.pop();
		if(u -> esEstadoAceptacion()) cout << "**";
		cout << u -> getId() << ": ";
		for(auto v : u -> getListaAdyacencia()){
			cout << "{" << v.first << ", " << v.second -> getId() << "} ";
			if(visitados.find(v.second) == visitados.end()) {
				visitados.insert(v.second);
				q.push(v.second);
			}
		}
		cout << '\n';
	}
}

vector<int> AFD::getIdsEstadosAceptacion() {
	vector<int> estadosAceptacion;
	queue<NodoAFD*> q;
	q.push(this -> estadoInicial);
	set<int> idsVisitados;
	idsVisitados.insert(this -> estadoInicial -> getId());
	while(!q.empty()){
		NodoAFD* u = q.front();
		q.pop();
		if(u -> esEstadoAceptacion())
			estadosAceptacion.push_back(u -> getId());
		for(auto v : u -> getListaAdyacencia()) {
			if(idsVisitados.find(v.second -> getId()) == idsVisitados.end()) {
				q.push(v.second);
				idsVisitados.insert(v.second -> getId());
			}
		}
	}
	return estadosAceptacion;
}

map<int,map<char,int> > AFD::generarListaAdyacenciaDeIds() {
	map< int, map<char, int> > retorno;
	set<int> visitados;
	queue<NodoAFD*> q;
	q.push(this -> estadoInicial);
	visitados.insert(this -> estadoInicial -> getId());
	while(!q.empty()) {
		NodoAFD *u = q.front(); q.pop();
		map<char, int> aux;
		for(auto w : u -> getListaAdyacencia()) {
			NodoAFD *v = w.second;
			retorno[u -> getId()][w.first] = v -> getId();
			if(visitados.find(v -> getId()) == visitados.end()) {
				visitados.insert(v -> getId());
				q.push(v);
			}
		}
	}
	return retorno;
}
int AFD::getIdEstadoInicial() {
	return this -> estadoInicial -> getId();
}
