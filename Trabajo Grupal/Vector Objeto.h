#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

class Vector{
	private:
		int *vector;
		int t;
	public:
		Vector(int *, int);
		void generarVector();
		void metodoBurbujaAumento();
		void metodoBurbujaDescenso();
		void imprimirVector();
		int *getV();
		int gett();
};

int *Vector::getV(){
	return vector;
}
int Vector::gett(){
	return t;
}
Vector::Vector(int *vec, int tam){
	this->vector=vec;
	this->t=tam;
}

void Vector::generarVector(){
	int i,j;
	for(i=0;i<t;i++){
			*(vector+i)=rand()%20+1;
	}
}

void Vector::imprimirVector(){
	cout<<"\t";
	for(int i=0;i<t;i++){
			cout<<*(vector+i)<<"\t";
		}
}

void intercambiar(int &a, int &b){
	int tmp = b;
	b = a;
	a = tmp;
}

void Vector::metodoBurbujaAumento(){
	for (int i = 0; i<t-1 ; i++)
    for (int j = 0; j<t-1 ; j++)
      if(*(vector+j) > *(vector+(j+1)))
 intercambiar(*(vector+j),*(vector+(j+1)));
}

void Vector::metodoBurbujaDescenso(){
	for (int i = 0; i<t-1 ; i++)
    for (int j = 0; j<t-1 ; j++)
      if(*(vector+j) < *(vector+(j+1)))
 intercambiar(*(vector+j),*(vector+(j+1)));
}
