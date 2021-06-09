#include "ConversorDeCadena.hpp"

ConversorDeCadena::ConversorDeCadena(){
	prioridadDeOperador['*'] = 4;
	prioridadDeOperador['.'] = 3;
	prioridadDeOperador['|'] = 2;
	prioridadDeOperador['('] = 5;
	prioridadDeOperador[')'] = 0;
}
bool ConversorDeCadena::esConcatenacion(char c, char t) {
	if(c == '|' || t == '|' || c == '(' || t == ')' || c == '*' || t == '*') return false;
	if(t == '('){
		if(c != '(') return true;
		else return false;
	}
	return true;
}
string ConversorDeCadena::ponerSimbolosDeConcatenacion(string s){
	int puntoActual = 0;
	vector<int> necesitaPunto;
	for(int i = 0; i < s.size()-1; i++) {
		if(esConcatenacion(s[i], s[i+1]))
			necesitaPunto.push_back(i+1);
	}
	string nuevaCadena;
	for(int i = 0; i < s.size(); i++){
		if(puntoActual < necesitaPunto.size() && i == necesitaPunto[puntoActual]){
			i--;
			nuevaCadena += '.';
			puntoActual++;
		}
		else nuevaCadena += s[i];
	}
	return nuevaCadena;
}
bool ConversorDeCadena::esOperador(char c) {
	return this -> prioridadDeOperador.find(c) != this -> prioridadDeOperador.end();
}
bool ConversorDeCadena::esOperando(char c) {
	return !esOperador(c);
}
string ConversorDeCadena::ejecutarPatioDeClasificacion(string s) {
	string salida;
	stack<char> pilaDeOperadores;
	for(char c : s){
		if(esOperando(c))
			salida += c;
		else if(c == ')') {
			while(pilaDeOperadores.top() != '(') {
				salida += pilaDeOperadores.top();
				pilaDeOperadores.pop();
			}
			pilaDeOperadores.pop();
		}
		else {
			int prioridadActual = prioridadDeOperador[c];
			char aux;
			while(!pilaDeOperadores.empty() && prioridadDeOperador[pilaDeOperadores.top()] >= prioridadActual){
				aux = pilaDeOperadores.top();
				if(prioridadDeOperador[aux] < prioridadActual || aux == '(') break;
				pilaDeOperadores.pop();
				salida += aux;
			}
			pilaDeOperadores.push(c);
		}
	}
	while(!pilaDeOperadores.empty()){
		salida += pilaDeOperadores.top();
		pilaDeOperadores.pop();
	}
	return salida;
}
string ConversorDeCadena::convertir(string s) {
	s = ponerSimbolosDeConcatenacion(s);
	s = ejecutarPatioDeClasificacion(s);
	return s;
}
