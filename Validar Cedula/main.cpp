#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "Cedula Validar.h"
using namespace std;
void *ingresar(char *msg, char ci[10]){
	char op;
	int i=0;
	printf("\n%s",msg);
	while((op=getch())!=13){
		if(op>='0'&&op<='9'){
			printf("%c",op);
			ci[i++]=op;
		}
	}
}

int main(){
	char cedula[10];
	ingresar("Por favor ingrese la cedula \t", cedula);
	cout<<endl;
	for(int i=0; i<10;i++){
	cout<<cedula[i];	
	}
	
	
	cout<<endl;
	validarCedula(cedula);
}
