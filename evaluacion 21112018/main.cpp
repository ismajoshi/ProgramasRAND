/* Ismael Moreno 21/11/2018
generar una lista simple que tiene 4 numeros
losn umeros son del 1 al 100
aparecer los 4 digitos al final de la pantalla
jugar como tetris hubicando los numeros que aparecen de forma randomica
en la posicion que se necesita; si hubica mal sale un error;
seguir hasta que aparezca un 0 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <list>
#include <unistd.h>
using namespace std;

void intercambiar(int &a, int &b){
	int tmp = b;
	b = a;
	a = tmp;
}
void metodoBurbujaAumento(int *vector, int t){
	for (int i = 0; i<t-1 ; i++)
    for (int j = 0; j<t-1 ; j++)
      if(*(vector+j) > *(vector+(j+1)))
 intercambiar(*(vector+j),*(vector+(j+1)));
}

int **tamMatriz(int t){
	int **matriz;
	matriz=(int**)malloc(t*sizeof(int*));
	for(int i=0;i<t;i++)
		*(matriz+i)=(int *)malloc(t*sizeof(int));
	return matriz;
}
int *vector(int t){
	int *matriz;
	matriz=(int*)malloc(t*sizeof(int*));
	return matriz;
}
bool verificar(int *vector, int valor,int tam){
 	for(int i=0; i<=tam;i++){
 		if(vector[i]==valor){
 			return true;
		 }
	 }
	 return false;
 }
void llenarMatriz(int **matriz, int t, int *numeros){
 	int n=1;
 	int valor=rand() %100 +1 , tam=0;
 	numeros=vector(5);
 	for (int i=0;i<t;i++){
 		for(int j=0; j<t;j++){
 			*(*(matriz+i)+j) = 0;
 		}
 	}
 			for(int i =0; i<5;i++){
 				while(verificar(numeros,valor,tam)==true){
			 		valor = rand() %100 +1;
				 }
 					numeros[tam]=valor;
 					tam=tam+1;
			 }
			 
			 metodoBurbujaAumento(numeros, 5);
			 int f=0;
			 int i =9;
			 for (int j = 0;j<t;j++){
			 	if(j==0||j==3||j==9||j==6){
			 		*(*(matriz+i)+j) = numeros[f];
			 		f++;
				 }
			 }
			 	
}
	
 	
 		
	 
  void imprimirMatriz(int **matriz, int t){
 	//char carac=178;
 	for(int i=0;i<t;i++){
 		for(int j=0; j<t;j++){
 			if(*(*(matriz+i)+j)==0){
	
 				cout<<" "<<"\t";
			 }else{
			 	cout<<*(*(matriz+i)+j)<<"\t";
			 }
 			
		 }
		 cout<<endl;
		 
	 }

 }
 int  nuevoValor(int **matriz, int *numeros){
 	int valor = rand() %100;
	*(*(matriz+0)+5)=valor;
 	return valor;
 }
  void cambiar(int **matriz, int x, int y, int x1, int y1){
 	int temp;
 	temp=matriz[x1][y1];
 	matriz[x1][y1]=0;
 	matriz[x][y]=temp;
 }

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));	
	int **matriz, *numeros;
	int tam;
	matriz = tamMatriz(10);
	llenarMatriz(matriz, 10, numeros);
	imprimirMatriz(matriz,10);
	cout<<endl;
	
	std::list<int> valores (numeros, numeros + sizeof(numeros) / sizeof(int) );
	for (std::list<int>::iterator it = valores.begin(); it != valores.end(); it++)	
	std::cout << *it << ' ';
	
	sleep(1);
	bool f = true;
	int x,y, ymax=10;
	
	while (true){
		x=5, y=0;
		system("cls");
		int a= nuevoValor(matriz, numeros);
		char flecha;
		system("cls");
	imprimirMatriz(matriz,10);
		
		while((flecha=getch())!=13){
		switch(flecha){
			case 77:
				if((x+1)<=ymax ){
					cambiar(matriz,x,y,(x+1),y);
					x=x+1;
				}
				cout<<"RIGHT";
				break;
			case 75:
				if((x-1)>=0){
					cambiar(matriz,x,y,(x-1),y);
					x=x-1;
				}
				cout<<"LEFT";
				break;
			
				
		}
	system("cls");
	imprimirMatriz(matriz,10);
	}
		
		
	}
	
	
	return 0;
}
