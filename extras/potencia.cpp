#include <stdio.h>
#include <iostream>

using namespace std;

int potencia(float* a,float* b ){
	int resp=1;
	for(int i=0;i<*b;i++){
		resp=resp*(*a);
	}
	return resp;
}


int main(){
	float a,b,resp;
	int n;
	do{
	cout<<"1. Potencia  0. Salir"<<endl;
	cin>>n;
	if(n==1){
		cout<<"Ingrese el primer numero"<<endl;
		cin>>a;
		cout<<"Ingrese el exponente"<<endl;
		cin>>b;
		resp=potencia(&a,&b);
		cout<<"la respuesta es: "<<resp<<"\n"<<endl;
	}
	}while(n!=0);
	return 0;
}
