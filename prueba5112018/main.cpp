#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
bool verificar(int*,int,int);

void gotoxy(int x, int y) { 
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}



char *ingresar (char *msg){
	printf("\n%s", msg);
	char op , dato[4];
	int i =0;
	while((op=getch())!=13){
		if(op>'0'&&op<='9'){
			printf("%c", op);
			dato[i++]=op;
		}
	}
	dato[i++]='\0';
	return dato;
}
void ordenartabla(int **matriz, int t){
	int max =(t*t)-1;
 	int n=1;
	int tam=0;
 	for(int i=0;i<t;i++){
 		for(int j=0; j<t;j++){
 			if(i==(t-1) && j==(t-1)){
 			*(*(matriz+i)+j) = NULL;
			 }else{
 			*(*(matriz+i)+j) = n;

 			n++;
 			}
		 }
	 }
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
 void llenarMatriz(int **matriz, int t){
 	int max =(t*t)-1;
 	int n=1;
 	int *numeros, valor=rand() %max +1 , tam=0;
 	numeros=vector(max);
 	for(int i=0;i<t;i++){
 		for(int j=0; j<t;j++){
 			if(i==(t-1) && j==(t-1)){
 			*(*(matriz+i)+j) = NULL;
			 }else{
			 	while(verificar(numeros,valor,tam)==true){
			 		valor = rand() %max +1;
				 }
 			*(*(matriz+i)+j) = valor;
 			numeros[tam]=valor;
 			tam=tam+1;
 			}
		 }
	 }
 }
 void imprimirMatriz(int **matriz, int t){
 	char carac=178;
 	for(int i=0;i<t;i++){
 		for(int j=0; j<t;j++){
 			if(*(*(matriz+i)+j)==0){
	
 				cout<<carac<<"\t";
			 }else{
			 	cout<<*(*(matriz+i)+j)<<"\t";
			 }
 			
		 }
		 cout<<endl;
		 
	 }


 }
 bool verificar(int *vector, int valor,int tam){
 	for(int i=0; i<=tam;i++){
 		if(vector[i]==valor){
 			return true;
		 }
	 }
	 return false;
 }
 void cambiar(int **matriz, int x, int y, int x1, int y1){
 	int temp;
 	temp=matriz[x1][y1];
 	matriz[x1][y1]=0;
 	matriz[x][y]=temp;
 }
 
 bool verificarJuego(int **matriz , int t){
 	int max=t-1;
 	int i,j;
 	int contador=1;
 	for (i=0;i<t;i++){
 		for(j=0;j<t;j++){

 			if(matriz[i][j]!=(contador)){
 				if(i!=max&&j!=max){
 					return false;
				 }
			 }
			  contador++;
		 }
	 }
	 return true;
 }


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int num=atoi(ingresar("Ingrese el valor: \t"));
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int **matriz;
	matriz=tamMatriz(num);
	llenarMatriz(matriz,num);
	system("cls");
	imprimirMatriz(matriz,num);
	
	int xmax = num-1,ymax=num-1;
	int x=xmax, y= ymax;
	char flecha;
	while((flecha=getch())!=27){
		switch(flecha){
			case 72:
				//cout<<"UP";
				if((x-1)>=0){
					cambiar(matriz,x,y,(x-1),y);
					x=x-1;
				}
				
				break;
			case 80:
				if((x+1)<=xmax){
					cambiar(matriz,x,y,(x+1),y);
					x=x+1;
				}
				//cout<<"DOWN";
				break;
			case 77:
				if((y+1)<=ymax ){
					cambiar(matriz,x,y,x,(y+1));
					y=y+1;
				}
				//cout<<"RIGHT";
				break;
			case 75:
				if((y-1)>=0){
					cambiar(matriz,x,y,x,(y-1));
					y=y-1;
				}
				//cout<<"LEFT";
				break;
			case 13:
				if(verificarJuego(matriz,num)==true){
					cout<<endl;
					cout<<"HAS COMPLETADO LA TABLA"<<endl;
					system("pause");
				}else{
					cout<<endl;
					cout<<"NO HAS COMPLETADO LA TABLA"<<endl;
					system("pause");
				}
				break;
			case 63:
				ordenartabla(matriz,num);
				x=xmax;
				y=ymax;
				break;
				
		}
	system("cls");
	imprimirMatriz(matriz,num);
	}
	return 0;
}
