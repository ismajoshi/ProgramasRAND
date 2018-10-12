#include <iostream>
#include "Persona.h"
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout<<"Registro de Persona"<<endl;
	string nombre, apellido;
	cout<<"\nIngrese datos de la Persona"<<endl;
	cout<<"\nNombre:\t\t";
	cin>>nombre;
	cout<<"Apellido:\t";
	cin>>apellido;
	
	Persona<string> p1(nombre,apellido);
	//system("cls");
	p1.ToString();
	
	return 0;
}
