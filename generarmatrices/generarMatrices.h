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
