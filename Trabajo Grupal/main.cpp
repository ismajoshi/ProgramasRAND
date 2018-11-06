#include <iostream>
#include <limits>
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "array.h"
#include "Vector Objeto.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char *ingresar(char *msg){
	char dato[4];
	char op;
	int i=0;
	printf("\n%s",msg);
	while((op=getch())!=13){
		if(op>='0'&&op<='9'){
			printf("%c",op);
			dato[i++]=op;
		}
	}
	dato[i]='\0';
	return dato;
}


int main() {
	srand(time(NULL));
	int *mat,dat;
	dat=atoi(ingresar("Por Favor ingrese el tamaño del arreglo:\t"));
	mat=matriz(dat);
	Vector vec1(mat, dat);
	vec1.generarVector();
	Vector vec2(vec1.getV(),vec1.gett());
	cout<<endl;
	cout<<endl;
	imprimirBarras(vec1.getV(),vec1.gett());
	cout<<endl;
	vec2.metodoBurbujaAumento();
	imprimirBarras(vec2.getV(),vec2.gett());
	
	return 0;
}
