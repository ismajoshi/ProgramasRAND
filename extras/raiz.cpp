#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int raiz(float* a){
	int resp;
	resp=float(sqrt(*a));
	return resp;
}


int main(){
	float a,resp;
	int n;
	do{
	cout<<"1. Raiz  0. Salir"<<endl;
	cin>>n;
	if(n==1){
		cout<<"Ingrese el primer numero"<<endl;
		cin>>a;
		resp=raiz(&a);
		cout<<"la respuesta es: "<<resp<<"\n"<<endl;
	}
	}while(n!=0);
	return 0;
}
