#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int a[3][3], b[3][3];
	generarMatriz(a);
	imprimirMatriz(a);
	printf("\n");
	
	generarMatriz(b);
	imprimirMatriz(b);
	return 0;
}
