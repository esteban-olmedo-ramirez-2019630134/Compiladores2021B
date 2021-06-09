#include "AFN.hpp"

AFN::AFN(NodoAFN* estadoInicial, set<char> alfabeto): estadoInicial(estadoInicial), alfabeto(alfabeto) {}

void AFN::imprimirDatos(){
	cout << "Alfabeto: {";
	for(char c : alfabeto) 
		cout << c << ", ";
	cout << "}\n";
	queue<NodoAFN*> q;
	set<int> visitados;
	visitados.insert(estadoInicial -> getId());
	q.push(estadoInicial);
	while(!q.empty()){
		NodoAFN* u = q.front();
		q.pop();
		cout << u -> getId() << ": ";
		for(auto v : u -> getListaAdyacencia()){
			for(NodoAFN *w : v.second){
				cout << "{" << v.first << ", " << w -> getId() << "} ";
				if(visitados.find(w -> getId()) == visitados.end()){
					visitados.insert(w -> getId());
					q.push(w);
				}
			}
		}
		cout << "\n";
	}
}
NodoAFN *AFN::getEstadoInicial(){
	return this -> estadoInicial;
}
set<char> AFN::getAlfabeto(){
	return this -> alfabeto;
}
map<int,map<char,vector<int>>> AFN::generarListaAdyacenciaDeIds() {
	map< int, map<char,vector<int> > > retorno;
	set<int> visitados;
	queue<NodoAFN*> q;
	q.push(this -> estadoInicial);
	visitados.insert(this -> estadoInicial -> getId());
	while(!q.empty()) {
		NodoAFN *u = q.front(); q.pop();
		for(auto w : u -> getListaAdyacencia()) {
			for(NodoAFN * v : w.second) {
				retorno[u -> getId()][w.first].push_back(v -> getId());
				if(visitados.find(v -> getId()) == visitados.end()) {
					visitados.insert(v -> getId());
					q.push(v);
				}
			}
		}
	}
	return retorno;
}
vector<int> AFN::getIdsEstadosAceptacion() {
	vector<int> estadosFinales;
	set<int> visitados;
	queue<NodoAFN*> q;
	q.push(this -> estadoInicial);
	visitados.insert(this -> estadoInicial -> getId());
	while(!q.empty()) {
		NodoAFN *u = q.front(); q.pop();
		if(u -> esEstadoAceptacion()) 
			estadosFinales.push_back(u -> getId());

		for(auto w : u -> getListaAdyacencia()) {
			for(NodoAFN * v : w.second) {
				if(visitados.find(v -> getId()) == visitados.end()) {
					visitados.insert(v -> getId());
					q.push(v);
				}
			}
		}
	}
	return estadosFinales;
}
int AFN::getIdEstadoInicial() {
	return this -> estadoInicial -> getId();
}
