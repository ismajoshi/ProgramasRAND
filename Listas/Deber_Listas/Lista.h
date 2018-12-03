//Universidad de las Fuerzas Armadas
//Nombre: Andrés Pupiales
//Fecha de creación: 23 - 11 - 2018
//Fecha de modificación: 25 - 11 - 2018

#include <iostream>
#include "Nodo.h"

using namespace std;

class Lista{
	private:
		Nodo *puntero;
	public:
		Lista();
		void ingresarPersona(Persona *);
		void eliminarPersona(string);
		void buscarPersona(string);
		string toString();
		~Lista();
};

Lista::Lista(){
	puntero = NULL;
}

void Lista::ingresarPersona(Persona *persona){
	puntero = new Nodo(persona,puntero);
}

string Lista::toString(){
	Nodo *aux = puntero;
	stringstream s;
	while(aux != NULL){
		s<<aux->getPersona()->toString()<<endl;
		aux = aux->getNSig();
	}
	return s.str();
}

void Lista::eliminarPersona(string n){
	Nodo *p = puntero;
	Nodo *aux = NULL;
	if(p != NULL){
		while(p != NULL && p->getPersona()->getCedula() != n){
			aux = p;
			p = p->getNSig();
		}
		if(p == NULL){
			cout<<"No se encontraron datos"<<endl;
		}else{
			if(aux == NULL){
				puntero = p->getNSig();
			}else{
				aux->setSig(p->getNSig());
			}
			delete p;
		}
	}
}

void Lista::buscarPersona(string n){
	Nodo *p = puntero;
	Nodo *aux = NULL;
	if(p != NULL){
		while(p != NULL && p->getPersona()->getCedula() != n){
			aux = p;
			p = p->getNSig();
		}
		if(p == NULL){
			cout<<"No se encontraron datos"<<endl;
		}else{
			if(aux == NULL){
				puntero = p->getNSig();
			}else{
				aux->setSig(p->getNSig());
			}
			cout<<p->getPersona()->toString();
		}
	}
}

Lista::~Lista(){
	Nodo *aux = puntero;
	Nodo *aux2;
	while(aux != NULL){
		aux2 = aux->getNSig();
		delete aux;
		aux = aux2;
	}
	puntero = NULL;
}
