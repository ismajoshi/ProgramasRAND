#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <ctime>
#include <sstream>
#include <exception>
#include<bits/stdc++.h> 

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
		string ingresarFecha();
		T validarCedula();
		void ToString();
		
		
	protected:
		T cedula;
		T nombre;
		T apellido;
		string FechaN;
		string FechaA;
		int AnoN;
		int edad;
};

template <class T>
Persona<T>::Persona(T _nombre, T _apellido ){
    this->cedula=validarCedula();
    this->nombre=_nombre;
    this->apellido=_apellido;
    this->FechaN=ingresarFecha();
    calcularedad();
}

template <class T>
T Persona<T>::validarCedula(){
	string _cedula;
	bool f =true;
	do{
	
	cout<<"Ingrese por favor el numero de cedula de la persona: \t";
	cin>>_cedula;
	if (_cedula.length()==10){
		if (verificarnumeros(_cedula)==true){
		f=false;
		return _cedula;
		}else{
		cout<<"Cedula no valida"<<endl;
		}
}else{
	cout<<"Cedula no valida"<<endl;
}
	
	}while(f==true);
	
}
template <class T>
bool Persona<T>::verificarnumeros(string c){
	stringstream stream;
	
		try{
			stream.clear();
			stream.str("");
			stream.str(c);
			int cedula;
			stream>>cedula;
		//	cout<<cedula<<endl;
			return true;
		}catch(exception& e){
			cout<<"ingrese solo números"<<endl;
			return false;
		}
	
	

}
template <class T>
string Persona<T>::ingresarFecha(){
	bool f=true, g=true;
	 string dia;
	 string mes;
	 string ano;
	 stringstream stream;
	do{
		try{
			do{
				cout<<"ingrese Año de nacimiento:\t";
				cin>>ano;
				stream.clear();
				stream.str("");
				stream.str(ano);
				int n;
				stream>>n;
				if(verificarnumeros(ano)==true && n<2018 &&n>1850){
					g=false;
				}
			}while(g==true);
			g=true;
			
			do{
				cout<<"ingrese mes de nacimiento:\t";
				cin>>mes;
				stream.clear();
				stream.str("");
				stream.str(mes);
				int n;
				stream>>n;
				if(verificarnumeros(ano)==true && n<13 &&n>0){
					g=false;
				}
			}while(g==true);
			g=true;
			
			do{
				cout<<"ingrese dia de nacimiento:\t";
				cin>>dia;
				stream.clear();
				stream.str("");
				stream.str(dia);
				int n;
				stream>>n;
				if(verificarnumeros(ano)==true && n<32 &&n>0){
					g=false;
				}
			}while(g==true);
			
			string fecha;
			stream.clear();
			stream.str("");
			stream.str(ano);
			int n;
			stream>>n;
			this->AnoN=n;
			fecha=dia+"/"+mes+"/"+ano;
			
			return fecha;
			
		}catch(exception& e){
			cout<<"error: Ingrese Números por favor"<<e.what()<<endl;
		}
		
	}while(f==true);
	return 0;
}
template <class T>
void Persona<T>::calcularedad(){
	char dia[5];
	char mes[5];
	char ano[5];
	time_t rawtime;
  	struct tm * timeinfo;

  	time (&rawtime);
  	timeinfo = localtime (&rawtime);

  	strftime (dia,80,"%d",timeinfo);
  	strftime (mes,80,"%m",timeinfo);
  	strftime (ano,80,"%Y",timeinfo);
	
	stringstream stream;
	stream.clear();
	stream.str("");
	stream.str(dia);
	string buffer;
	stream>>buffer;
	
	string fecha;
			fecha=buffer+"/";
	
	stream.clear();
	stream.str("");
	stream.str(mes);
	stream>>buffer;
	fecha = fecha+buffer+"/";
	
	stream.clear();
	stream.str("");
	stream.str(ano);
	stream>>buffer;
	
	
	fecha = fecha+buffer;
	stream.clear();
	stream.str("");
	stream.str(ano);
	int anoa;
	stream>>anoa;
	this->edad=anoa-this->AnoN;
	this->FechaA=fecha;
}

template <class T>
void Persona<T>::ToString(){
	cout<<"\n\n\n\n"<<endl;
	cout<<"Datos Del usuario Registrado"<<endl;
	cout<<"\nNombre:\t\t\t"<<nombre<<endl;
	cout<<"Apellido:\t\t"<<apellido<<endl;
	cout<<"Cédula:\t\t\t"<<cedula<<endl;
	cout<<"Fecha de Nacimiento:\t"<<FechaN<<endl;
	cout<<"Edad:\t\t\t"<<edad<<endl;
	cout<<"\nFecha Del Sistema:\t"<<FechaA<<endl;
	
	
}



#endif
