#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <ctime>
using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

template <class T>
class Persona
{
	public:
		Persona(T,T);
		void calcularedad();
		bool verificarnumeros(string);
		T ingresarFecha();
		T validarCedula();
		
		
	protected:
		T cedula;
		T nombre;
		T apellido;
		T FechaN;
		T FechaA;
		T edad;
};

template <class T>
Persona<T>::Persona(T _nombre, T _apellido ){
    this->cedula=validarCedula();
    this->nombre=_nombre;
    this->apellido=_apellido;
    this->FechaN=ingresarFecha();
    char _FechaA[15];
    time_t horaactual;
    tm * horaac;
    time(&horaactual);
    horaac=localtime(&horaactual);
    strftime(_FechaA,11,"%d/%m/%y",horaac);
    calcularedad();
}

template <class T>
T Persona<T>::validarCedula(){
	string _cedula;
	bool f =true;
	do{
	
	cout<<"Ingrese por favor el numero de cedula de la persona"<<endl;
	cin>>_cedula;
	if (verificarnumeros(_cedula)==true){
		f=false;
		return _cedula;
	}
	}while(f==true);
	
}
template <class T>
bool Persona<T>::verificarnumeros(string c){
	return c.find_first_not_of("0123456789") == std::string::npos;
}
template <class T>
T Persona<T>::ingresarFecha(){
	return 0;
}
template <class T>
void Persona<T>::calcularedad(){
	
}



#endif
