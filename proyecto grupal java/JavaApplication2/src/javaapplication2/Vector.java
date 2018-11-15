/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.util.ArrayList;
import java.util.LinkedList;

/**
 *
 * @author t0p01
 */
public class Vector {
    private ArrayList<Integer> numeros;
    private int t;
    
    public ArrayList<Integer> getV(){
        return numeros;
    }

    public Vector(int t) {
        numeros=new ArrayList<Integer>();
        this.t = t;
    }
    
    public void generarVector(){
        for (int i=0;i<t;i++){
            numeros.add((int) (Math.random() * ((20-1)+1) + 1));
        }
    }
    private void intercambiar(int a, int b){
        int tmp = numeros.get(b);
        numeros.set(b, numeros.get(a));
        numeros.set(a, tmp);
    }
    public void metodoBurbujaAumento(){
        for (int i=0; i<t-1;i++)
            for(int j=0;j<t-1;j++)
                if(numeros.get(j)>numeros.get(j+1))
                    intercambiar(j, (j+1));
                    
    }
    public void imprimirarreglo(){
        for(int i=0; i<t;i++){
            System.out.print(numeros.get(i)+"\t");
        }
    }
    public void metodoBurbujaDescenso(){
        for (int i=0; i<t-1;i++)
            for(int j=0;j<t-1;j++)
                if(numeros.get(j)<numeros.get(j+1))
                    intercambiar(j, (j+1));
                    
    }
    
}
