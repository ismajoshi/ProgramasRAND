//Extra 10 ejercicios punteros
#include <stdio.h>
#include <iostream>

using namespace std;

int division(float* a,float* b ){
	int resp;
	resp=(*a)/(*b);
	return resp;
}


int main(){
	float a,b,resp;
	int n;
	do{
	cout<<"1. Dividir  0. Salir"<<endl;
	cin>>n;
	if(n==1){
		cout<<"Ingrese el primer numero"<<endl;
		cin>>a;
		cout<<"Ingrese el segundo numero"<<endl;
		cin>>b;
		resp=division(&a,&b);
		cout<<"la respuesta es: "<<resp<<"\n"<<endl;
	}
	}while(n!=0);
	return 0;
}
