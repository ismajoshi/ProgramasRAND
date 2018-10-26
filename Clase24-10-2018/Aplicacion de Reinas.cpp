#include <iostream>
#include<fstream>
using namespace std;
class reina{
	public:
		bool **validar;
		char **tablero;
		fstream enter;
		int contador;
		int N;
		reina(int n){
			N = n;
			validar = new bool*[N];
			tablero = new char*[N];
			for(int i = 0; i < N; i++){
				validar[i] = new bool[N];
				tablero[i] = new char[N];
				for(int j = 0; j < N; j++){
					validar[i][j] = false;
					tablero[i][j] = '.' ;
				}
			}
		enter.open("Solucion.txt",fstream::out);
		enter<<"Solucion en tablero de "<<N<<"*"<<N<<endl<<endl;
		contador = 0;
		}	
void solucion(int x,int y,int n){
	tablero[x][y] = 'R';
	bloquear(x,y);
	if(n == N){
		mostrar();
	}else{
			for(int i = 0; i < N; i++){
					if(validar[i][y+1] == false)
					solucion(i, y+1, n+1);
				}	
	}
	quitarRellenar(x,y);	
}
void bloquear(int x, int y){
	int aux1, aux2;
	aux2 = y;
	aux1 = 0;
	while(aux1 < N){
		validar[aux1][aux2]=true;
		aux1++;
	}
	//vertical
	aux2 = 0;
	aux1 = x;
	while(aux2 < N){
		validar[aux1][aux2]=true;
		aux2++;
	}
	//diagonal secundaria
	aux1 = x;
	aux2 = y;
	while(aux1 > 0 && aux2 > 0){
		aux1--;
		aux2--;		
	}
	aux1++;
	aux2++;
	while(aux1 < N && aux2 < N){
		validar[aux1][aux2]=true;
		aux1++;
		aux2++;
	}
	//diagonal principal
	aux1 = x;
	aux2 = y;
	while(aux1 < N && aux2 > 0){
		aux1++;
		aux2--;		
	}
	aux1--;
	aux2++;
	while(aux1 >= 0 && aux2 < N){
		validar[aux1][aux2]=true;
		aux1--;
		aux2++;
	}
}
void quitarRellenar(int x, int y){
	tablero[x][y]='.';
	for(int i = 0; i < N;i++){
		for(int j= 0;j<N;j++){
			validar[i][j]=false;
		}
	}	
	for(int i = 0; i < N;i++){
		for(int j= 0;j<N;j++){
			if(tablero[i][j] == 'R')
			bloquear(i,j);
		}
	}
}
void mostrar(){
	contador++;
	enter<<"Solcion N# "<<contador<<endl;
	for(int i = 0; i < N;i++){
		for(int j= 0;j<N;j++){
			enter<<tablero[i][j]<<" ";
		}
		enter<<endl;
	}
	enter<<endl;
}
void solucionarReinas(){
	for(int j = 0; j < N; j++){
		solucion(j,0,1);
	}
	enter.close();
}
};
int main(int argc, char** argv) {
	int n;
	cout<<"Ingrese el numero de reinas a procesar: "<<endl;
	cin>>n;
	reina *obj = new reina(n);
	obj->solucionarReinas();
	cout<<"Se ha creado el archivo solucion.txt"<<endl;
	return 0;
}
