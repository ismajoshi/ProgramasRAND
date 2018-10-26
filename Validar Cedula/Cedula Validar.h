#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void validarCedula(char a[10]){
	int i = 0, v[9], n[10];
    for (int j = 0; j < 10; j++) {
        //cout<<a[j]<<" yolo"<<endl;
        switch (a[j]) {
            case '0': n[j] = 0;
                break;
            case '1': n[j] = 1;
                //cout<<n[j]<<" kha"<<endl;
                break;
            case '2': n[j] = 2;
                break;
            case '3': n[j] = 3;
                break;
            case '4': n[j] = 4;
                break;
            case '5': n[j] = 5;
                break;
            case '6': n[j] = 6;
                break;
            case '7': n[j] = 7;
                break;
            case '8': n[j] = 8;
                break;
            case '9': n[j] = 9;
                break;
        }
    }
    int uno = n[0] + n[1];
    if (uno >= 0 && uno <= 24) {
        i++;
    }
    if (n[2] < 6) {
        i++;
    }
    //cout << n[0] << "  jola" << endl;
    v[0] = n[0]*2;
    //cout << v[0] << " si" << endl;
    v[1] = n[1]*1;
    v[2] = n[2]*2;
    v[3] = n[3]*1;
    v[4] = n[4]*2;
    v[5] = n[5]*1;
    v[6] = n[6]*2;
    v[7] = n[7]*1;
    v[8] = n[8]*2;
    for (int j = 0; j < 9; j++) {
        if (v[j] >= 10) {
            v[j] = v[j] - 9;
            //    cout << v[j]<<" perro: " << endl;
        }
    }
    int verf = 0;
    for (int j = 0; j < 9; j++) {
        verf = verf + v[j];
        //  cout<<verf<<" Zhi"<<endl; 
    }
    int comp = ((verf / 10) + 1)*10;
    //cout<<"Comp_ "<<comp<<endl;
    if ((comp - verf) == n[9]) {
        i++;
    }
    if (i == 3) {
        //cedula = a;
        cout<<"Cedula correcta"<<endl;
       
    } else {
        cout << "Cedula Incorrecta" << endl;
        
    }
}
