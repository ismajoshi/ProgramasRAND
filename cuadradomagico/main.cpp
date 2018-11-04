#include<iostream>
using namespace std;
int main(){
    int n,a=0,i=1,b,m[100][100];

    cout<<"Ingrese dimension para la matriz = ";cin>>n;
    b=n/2;//esto es para situar el mumero 1 en el centro
    while(i<=(n*n)){
    	
            if(a<0)a=n-1;//a viene las columnas
            if(b==n)b=0;//b viene a ser las filas
            if(m[a][b]>=1&&m[a][b]<=(n*n)){
              a=a+2;b--;
              if (!(a<n))a=a-n;
              if(b<0)b=n-1;
              m[a][b]=i;
             }
            else {m[a][b]=i;}
            --a;++b;
            i++;
            }
   
    // imprimir cuadrado magico
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    cout<<m[i][j]<<"\t";
                    }
            cout<<endl;
            }
    system("pause");
    return 0;
}
