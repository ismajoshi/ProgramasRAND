//Universidad de las Fuerzas Armadas
//Nombre: Andrés Pupiales
//Fecha de creación: 23 - 11 - 2018
//Fecha de modificación: 23 - 11 - 2018

#include <iostream>
#include "Persona.h"

using namespace std;

class Nodo{
	private:
		Persona *per;
		Nodo *sig;		
	public:	
		Nodo();
		Nodo(Persona *, Nodo *);
		~Nodo();
		void setPersona(Persona *);
		void setSig(Nodo *);
		Nodo *getNSig();
		Persona *getPersona();
};

Nodo::Nodo(){
	per = NULL;
	sig = NULL;
}

Nodo::Nodo(Persona *persona, Nodo *sgt){
	per = persona;
	sig = sgt;
}

Nodo::~Nodo(){
}

void Nodo::setPersona(Persona *persona){
	per = persona;
}

void Nodo::setSig(Nodo *sgt){
	sig = sgt;
}

Nodo *Nodo::getNSig(){
	return sig;
}
	
Persona *Nodo::getPersona(){
	return per;
}
