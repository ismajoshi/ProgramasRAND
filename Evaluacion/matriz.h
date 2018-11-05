#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char *ingresar (char *);

char *ingresar(char *msg){
	char dato[4];
	char op;
	int i=0;
	printf("\n%s",msg);
	while((op=getch())!=13){
		if(op>='1'&&op<='9'){
			printf("%c",op);
			dato[i++]=op;
		}
	}
	dato[i]='\0';
	return dato;
}


class Matriz{
	public:
		int t;
		int **mat;
		void 
};
