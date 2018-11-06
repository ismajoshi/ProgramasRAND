#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;

int *matriz(int t){
	int *m,i;
	m=(int*)malloc(t*sizeof(int*));
	return m;
}

void imprimirArreglo(int *mat,int t){
	cout<<"\t";
	for(int i=0;i<t;i++){
			cout<<*(mat+i)<<"\t";
		}
}

void imprimirBarras(int *mat,int t)
{
	char caracter=219;
    int numeroG = 0;


             for (int i = 0;i<t;i++){
                 if(mat[i]>numeroG)
                 numeroG = mat[i];
                 }

             for (int j = 0; j <numeroG; ++j){
             for (int i = 0; i <t; ++i)
                 cout <<"\t"<< (j+mat[i] >= numeroG ? caracter : ' ')<<" " ;
                 cout << endl;
             }
             imprimirArreglo(mat,t);
        



}
