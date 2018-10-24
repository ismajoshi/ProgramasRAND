//Extra 10 ejercicios punteros
#include <stdio.h>
#include <iostream>

using namespace std;

int factorial(float* a){
	int resp=1;
	for(int i=0;i<*a;i++){
		resp=resp*(*a-i);
	}
	return resp;
}


int main(){
	float a,resp;
	int n;
	do{
	cout<<"1. Factorial  0. Salir"<<endl;
	cin>>n;
	if(n==1){
		cout<<"Ingrese el primer numero"<<endl;
		cin>>a;
		resp=factorial(&a);
		cout<<"la respuesta es: "<<resp<<"\n"<<endl;
	}
	}while(n!=0);
	return 0;
}
