#include <iostream>
#include "MetodoBurbuja.h"

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

int *vector(int t){
	int *m,i;
	m=(int*)malloc(t*sizeof(int*));
	return m;
}

int main(int argc, char** argv) {
	srand(time(NULL));
	int *vec,*vec2,dat;
	dat=atoi(ingresar("Ingrese tamanio de la vecriz :"));
	cout<<endl;
	vec=vector(dat);
	vec2=vector(dat);
	Burbuja b1(vec);
	cout<<"Orden de menor a mayor"<<endl;
	b1.generarVector(vec,dat);
	b1.imprimirVector(vec,dat);
	b1.metodoBurbujaAumento(vec,dat);
	cout<<endl;
	b1.imprimirVector(vec,dat);
	cout<<"Orden de mayor a menor"<<endl;
	Burbuja b2(vec2);
	b2.generarVector(vec2,dat);
	b2.imprimirVector(vec2,dat);
	cout<<endl;
	b2.metodoBurbujaDescenso(vec2,dat);
	b2.imprimirVector(vec2,dat);
	return 0;
}
