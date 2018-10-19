#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "generarMatrices.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int a[3][3], b[3][3],c[3][3];
	generarMatriz(a);
	imprimirMatriz(a);
	printf("\n");
	
	generarMatriz(b);
	imprimirMatriz(b);
	
	cout<<"\n";
	multiplicarMatriz(a,b,c);
	imprimirMatriz(c);
	return 0;
}
