#include <iostream>
#include "Persona.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Registro de Persona"<<endl;
	string nombre, apellido;
	cout<<"\nIngrese datos de la Persona"<<endl;
	cout<<"Nombre:\t";
	cin>>nombre;
	cout<<"\nApellido:";
	cin>>apellido;
	
	Persona<string>(nombre,apellido);
	
	return 0;
}
