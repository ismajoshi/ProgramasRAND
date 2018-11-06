#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

class Burbuja{
	private:
		int *vector;
	public:
		Burbuja(int *);
		void generarVector(int *,int);
		void metodoBurbujaAumento(int *,int t);
		void metodoBurbujaDescenso(int *, int t);
		void imprimirVector(int *,int);
};

Burbuja::Burbuja(int *vec){
	this->vector=vec;
}

void Burbuja::generarVector(int *vec,int t){
	int i,j;
	for(i=0;i<t;i++){
			*(vec+i)=rand()%7+1;
	}
}

void Burbuja::imprimirVector(int *vec, int t){
	int i;
	for(i=0;i<t;i++){
			cout<<*(vec+i)<<" ";
		}
		printf("\n");
}

void intercambiar(int &a, int &b){
	int tmp = b;
	b = a;
	a = tmp;
}

void Burbuja::metodoBurbujaAumento(int *vec, int t){
	for (int i = 0; i<t-1 ; i++)
    for (int j = 0; j<t-1 ; j++)
      if(*(vec+j) > *(vec+(j+1)))
 intercambiar(*(vec+j),*(vec+(j+1)));
}

void Burbuja::metodoBurbujaDescenso(int *vec, int t){
	for (int i = 0; i<t-1 ; i++)
    for (int j = 0; j<t-1 ; j++)
      if(*(vec+j) < *(vec+(j+1)))
 intercambiar(*(vec+j),*(vec+(j+1)));
}
