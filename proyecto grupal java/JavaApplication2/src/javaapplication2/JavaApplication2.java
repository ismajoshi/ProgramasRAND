/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.util.Scanner;


/**
 *
 * @author t0p01
 */
public class JavaApplication2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int a;
        Scanner in = new Scanner(System.in);
        System.out.println("Ingrese por favor el tamaño del vector");
        a=in.nextInt();
        Vector vect;
        vect = new Vector(a);
        vect.generarVector();
        vect.imprimirarreglo();
        System.out.println("");
        vect.metodoBurbujaAumento();
        vect.imprimirarreglo();
        System.out.println("");
        vect.metodoBurbujaDescenso();
        vect.imprimirarreglo();
    }
    
}
