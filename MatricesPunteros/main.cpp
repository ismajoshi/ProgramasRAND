#include <iostream>
#include "GenerarMatriz.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	

int **matriz(int);
int **matriz(int t){
	int **m,i;
	m=(int**)malloc(t*sizeof(int*));
	for(i=0;i<t;i++)
		*(m+i)=(int *)malloc(t*sizeof(int));
	return m;
}

int main(int argc, char** argv) {
	srand(time(NULL));
	//int mat[3][3],mat1[3][3],matR[3][3];
	int **mat,**mat1,**matR;
	int dat;
	dat=atoi(ingresar("Ingrese tamanio de la matriz :"));
	mat=matriz(dat);
	mat1=matriz(dat);
	matR=matriz(dat);
	printf("\n Valor ingresado %d",dat);
	generarMatriz(mat,dat);
	printf("\n");
	imprimirMatriz(mat,dat);
	generarMatriz(mat1,dat);
	printf("\n");
	imprimirMatriz(mat1,dat);
	multiplicarMatriz(mat,mat1,matR,dat);
	printf("\n");
	imprimirMatriz(matR,dat);
 	return 0 ;
}
