#include <stdio.h>
#include <iostream>

using namespace std;

int suma(float* a,float* b ){
	int resp;
	resp=*a+*b;
	return resp;
}


int main(){
	float a,b,resp;
	int n;
	do{
	cout<<"1. Sumar  0. Salir"<<endl;
	cin>>n;
	if(n==1){
		cout<<"Ingrese el primer sumando"<<endl;
		cin>>a;
		cout<<"Ingrese el segundo sumando"<<endl;
		cin>>b;
		resp=suma(&a,&b);
		cout<<"la respuesta es: "<<resp<<"\n"<<endl;
	}
	}while(n!=0);
	return 0;
}
