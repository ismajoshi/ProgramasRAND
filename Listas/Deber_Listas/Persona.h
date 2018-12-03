//Universidad de las Fuerzas Armadas
//Nombre: Andrés Pupiales
//Fecha de creación: 23 - 11 - 2018
//Fecha de modificación: 25 - 11 - 2018

#include <iostream>
#include <string.h>
#include <sstream>
#include <string.h>
#include <wchar.h>
#include <time.h>

using namespace std;

class Persona{
	private:
		string nombre, apellido;
		int anio,mes,dia,edad;
		string cedula;
	public:
		Persona();
		Persona(string, string, int, int, int, string);
		void setNombre(string);
		void setCedula(string);
		void setApellido(string);
		void setEdad(int);
		int getEdad();
		int calcularEdad(int);
		string getApellido();
		string getNombre();
		string getCedula();
		string toString();
		~Persona();
};

Persona::Persona(){
	nombre = "";
	anio = 0;
	cedula = "";
}

Persona::Persona(string nom, string ape, int an, int m, int d, string ced){
	nombre = nom;
	apellido = ape;
	anio = an;
	mes = m;
	dia = d;
	cedula = ced;
	edad = 0;
}

int Persona::calcularEdad(int a){
	int aux;
	time_t now = time(0);	
	tm * time=localtime(&now);
	aux = (1900+time->tm_year) - a;
	return aux;
}

void Persona::setNombre(string nom){
	nombre = nom;
}

string Persona::getNombre(){
	return nombre;
}

void Persona::setCedula(string ced){
	cedula = ced;
}

string Persona::getCedula(){
	return cedula;
}

void Persona::setEdad(int e){
	edad=e;
}

int Persona::getEdad(){
	return edad;
}

string Persona::toString(){
	stringstream s;
	s<<"Nombre: "<<nombre<<endl;
	s<<"Apellido: "<<apellido<<endl;
	s<<"Año de nacimiento: "<<anio<<endl;
	s<<"Mes de nacimiento: "<<mes<<endl;
	s<<"Dia de nacimiento: "<<dia<<endl;
	s<<"Edad: "<<edad<<endl;
	s<<"Cedula: "<<cedula<<endl;
	return s.str();
}

Persona::~Persona(){
}
