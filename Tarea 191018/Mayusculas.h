#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;
void convetirMayus(char cadena [], int i, int c){
	if(int(cadena[i])>=97){
		cadena[i]=int(cadena[i])-32;		
	}
	cout<<cadena[i];
	if(i<c){
		convetirMayus(cadena,i+1,c);
	}
}

void convetirMinus(char cadena [], int i, int c){
	if(int(cadena[i])>=65&&int(cadena[i])<=90){
		cadena[i]=int(cadena[i])+32;		
	}
	cout<<cadena[i];
	if(i<c){
		convetirMinus(cadena,i+1,c);
	}
}
void contarLetras(char cadena [], int i, int c, int total){
	if((int(cadena[i])>=65&&int(cadena[i])<=90) || (int(cadena[i])>=97&&int(cadena[i])<=122)){
		total++;
	}	
		if(i<c){
			contarLetras(cadena,i+1,c,total);
			}else{
				
				cout<<"\nTotal Letras: "<<total;	
		
				}
	
}
