#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include "Mayusculas.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	char nombre[100];
	//string id, nombre, apellido, carne;
	int op, i=0;
	//char op;
	
		i=0;
		cout<<"ingrese la cadena que se convertira a Mayusculas"<<endl;
	while((op=getch())!=13){
		if(op>='a'&&op<='z' || op>='A'&& op<='Z'  || op==' ' || op>='0'&&op<='9'){
			printf("%c",op);
			nombre[i++]=op;
		}
	}
	string str(nombre);
	int c = str.length();
	cout<<"\n\nMAYUSCULAS\n";
	convetirMayus(nombre, 0, c);
	cout<<"\n\nminusculas\n";
	convetirMinus(nombre, 0, c);
	cout<<"\n";
	contarLetras(nombre,0,c,0);
	

	

return 0;
}
