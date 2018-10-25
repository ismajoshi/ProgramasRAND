#include <iostream>
#include <stdlib.h>
using namespace std;

int fibonacciValor(int num){
	if(num==0||num==1){
		return num;
	}
	else{
		return fibonacciValor(num-1)+fibonacciValor(num-2);
	}
}

int Factorial(int num){
	if (num==1){
		return 1;
	}
	else{
		return num*Factorial(num-1);
	}
}

int sumaValoresFact(int num){
	if(num==1){
		return 1;
	}
	else{
		return Factorial(fibonacciValor(num))+sumaValoresFact(num-1);
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a;
	cout<<"Ingrese el el numero de valoes que que quiere agregar a la funcion de fibonacci:"<<endl;
	cin>>a;
	cout<<endl;
	int r=0;
	for(int i =1;i<=a;i++){
		cout<<fibonacciValor(i)<<endl;
	}
	cout<<"\n La sumatoria de los factoriales de los valores de la serie es:\t"<<sumaValoresFact(a)<<endl;
	//for(int i =1;i<=a;i++){
	//	r=r+Factorial(fibonacciValor(i));
	//}
	//cout<<"Ans:\t"<<r<<endl;
	
	return 0;
}
