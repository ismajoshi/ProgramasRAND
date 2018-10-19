#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void generarMatriz(int[][3]);
void imprimirMatriz(int[][3]);

void imprimirMatriz(int mat[3][3]){
	for(int i =0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}

void generarMatriz(int mat[3][3]){
	for(int i =0;i<3;i++){
		for (int j=0;j<3;j++){
			mat[i][j]=rand()%5;
		}
	}
}
void multiplicarMatriz(int mat1[3][3], int mat2[3][3], int matR[3][3]){
	int i,j,h;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matR[i][j]=0;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			for(h=0;h<3;h++){
				matR[i][j]=matR[i][j]+(mat1[i][h]*mat2[h][j]);
			}
		}
	}
}

char *ingresar (char *msg){
	char dato[4];
	char op;
	int i=0;
	printf("\n%s",msg);
	while((op=getch)!=13){
		if(op>='0'&&op<='9'){
			printf("%c",op);
			dato[i++]=op;
		}
	}
	return dato;
	
}



//TAREA MENU CON CURSORES
