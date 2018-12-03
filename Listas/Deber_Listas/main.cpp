//Universidad de las Fuerzas Armadas
//Nombre: Andrés Pupiales
//Fecha de creación: 23 - 11 - 2018
//Fecha de modificación: 25 - 11 - 2018

#include <iostream>
#include "Lista.h"
#include <locale.h>
#include <conio.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool validarFecha(int, int, int);
bool validarCedula(char []);

bool validarFecha(int a, int m, int d){
	bool opc=false;
	if(a>1940&&a<2019){
		if(m>0&&m<13){
			switch(m){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					if(d>0&&d<32){
					opc=true;
					}
				break;
				case 2:
					if(a%4==0){
						if(d>0&&d<30){
						opc=true;
					}
				}else{
					if(d>0&&d<29){
					opc=true;
					}	
				}
				break;
				case 4:
				case 6:
				case 9:
				case 11:
					if(d>0&&d<31){
						opc=true;
					}
				break;
			}					
		}
	}
	if(opc==false){
		cout<<"Fecha inválida, ingrese de nuevo"<<endl;
	}
	return opc;
};

bool validarCedula(char n[]){
	int a[5];
	int b[4];
	int limite;
	int c = 0, d = 1;
	int suma = 0;
	int aux, dec;
	int val;
	limite = strlen(n);
	if(limite != 10){
		cout<<"Cédula incorrecta"<<endl;
	}else{
		for(int i = 0; i < 5; i ++){
			a[i] = (int)n[c]-48;
			c = c + 2;
		}
		for(int j = 0; j < 4; j ++){
			b[j] = (int)n[d]-48;
			suma = suma + b[j];
			d = d + 2;
		}
		for(int k = 0; k < 5; k ++){
			a[k] = a[k] * 2;
			if(a[k] > 9){
				a[k] = a[k] - 9;
			}
			suma = suma + a[k];
		}
		aux = suma / 10;
		dec = (aux + 1) * 10;
		val = dec - suma;
		if(val == (int)n[9]-48){
			cout<<"Cédula correcta"<<endl;
			return true;
		}else{
			cout<<"Cédula incorrecta"<<endl;
			return false;
		}
	}
};

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	stringstream stream;
	Lista *vec = new Lista();
	Persona *p1;
	int anioNacimiento, diaNacimiento, mesNacimiento, edad,opc1;
	string cedula,nombre,apellido,eliminarCed,buscarCed;
	char c[11],op;
	bool opc;
		do{
			cout<<"\t\t\t\t\t Bienvenido"<<endl<<endl;
			cout<<"1) Ingresar datos \t 2) Elminar \t 3) Buscar \t 4) Mostrar lista \t 0) Salir"<<endl;
			cin>>opc1;
			switch(opc1){
				case 1:
					cout<<"Ingrese su nombre:"<<endl;
					cin>>nombre;
					cout<<"Ingrese su apellido:"<<endl;
					cin>>apellido;
					while(opc != true){
						cout << "Ingrese su número de cédula: ";
						fgets(c,11,stdin);
						opc = validarCedula(c);
						cout << endl;
					} ;
					stream.clear();
					stream.str("");
					stream.str(c);
					stream>>cedula;
					do{
						cout<<"Ingrese su día de nacimiento:"<<endl;
						cin>>diaNacimiento;
						cout<<"Ingrese su mes de nacimiento:"<<endl;
						cin>>mesNacimiento;
						cout<<"Ingrese su año de nacimiento:"<<endl;
						cin>>anioNacimiento;
						opc=validarFecha(anioNacimiento,mesNacimiento,diaNacimiento);
					}while(opc!=true);
					p1 = new Persona(nombre,apellido,anioNacimiento,mesNacimiento,diaNacimiento,cedula);
					edad = p1->calcularEdad(anioNacimiento);
					p1->setEdad(edad);
					vec->ingresarPersona(p1);
					cout<<endl;
					system("cls");
					break;
				case 2:
					cout<<"Ingrese la cedula de la persona que desea eliminar"<<endl;
					cin>>eliminarCed;
					vec->eliminarPersona(eliminarCed);
					cout<<endl;
					system("cls");
					break;
				case 3:
					system("cls");
					cout<<"Ingrese la cedula de la persona que desea buscar"<<endl;
					cin>>buscarCed;
					vec->buscarPersona(buscarCed);
					cout<<endl;
					break;
				case 4:
					cout<<endl;
					cout<<vec->toString()<<endl;
					cout<<endl;
					break;
			}
		}while(opc1 >= 1 && opc1 <= 4);
	return 0;
}
