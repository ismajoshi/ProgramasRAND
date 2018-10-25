<<<<<<< HEAD
=======
//Extra 10 ejercicios punteros
>>>>>>> 990c47ad112e7bd304e245f8c50881c4205bf3cc
#include <stdio.h>
#include <iostream>

using namespace std;

int resta(float* a,float* b ){
	int resp;
	resp=*a-*b;
	return resp;
}


int main(){
	float a,b,resp;
	int n;
	do{
	cout<<"1. Restar  0. Salir"<<endl;
	cin>>n;
	if(n==1){
		cout<<"Ingrese el primer numero"<<endl;
		cin>>a;
		cout<<"Ingrese el segundo numero"<<endl;
		cin>>b;
		resp=resta(&a,&b);
		cout<<"la respuesta es: "<<resp<<"\n"<<endl;
	}
	}while(n!=0);
	return 0;
}
