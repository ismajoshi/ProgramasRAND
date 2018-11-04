
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void generarMatriz(int **,int);
void imprimirMatriz(int **,int);
void multiplicarMatriz(int **,int **,int **,int);
char *ingresar(char *);

char *ingresar(char *msg){
	char dato[4];
	char op;
	int i=0;
	printf("\n%s",msg);
	while((op=getch())!=13){
		if(op>='0'&&op<='9'){
			printf("%c",op);
			dato[i++]=op;
		}
	}
	dato[i]='\0';
	return dato;
}
void generarMatriz(int **mat,int t){
	int i,j;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			*(*(mat+i)+j)=rand()%5+1;
			//scanf("%d",&(*(*(mat+i)+j)));
		}
	}
}
void imprimirMatriz(int **mat,int t){
	int i,j;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
}
void multiplicarMatriz(int **mat1,int **mat2,int **matR,int t){
	int i,j,h;
	for(i=0;i<t;i++){
		
		for(j=0;j<t;j++){
			matR[i][j]=0;
			for(h=0;h<t;h++){
				*(*(matR+i)+j)=*(*(matR+i)+j)+(*(*(mat1+i)+j)* *(*(mat2+i)+j));
			}		
		}
	}
}

