/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Aplicacion;

import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 *
 * @author t0p01
 */
public final class Vector {

    private final ArrayList<Integer> numeros;
    private final int t;

    public ArrayList<Integer> getV() {
        return numeros;
    }

    public int getT() {
        return t;
    }

    public Vector(int t) {
        numeros = new ArrayList<>();
        this.t = t;
        generarVector();
    }

    public void generarVector() {
        for (int i = 0; i < t; i++) {
            numeros.add((int) (Math.random() * ((20 - 1) + 1) + 1));
        }
    }

    private void intercambiar(int a, int b) {
        int tmp = numeros.get(b);
        numeros.set(b, numeros.get(a));
        numeros.set(a, tmp);
    }

    public void metodoBurbujaAumento() {
        for (int i = 0; i < t - 1; i++) {
            for (int j = 0; j < t - 1; j++) {
                if (numeros.get(j) > numeros.get(j + 1)) {
                    intercambiar(j, (j + 1));
                }
            }
        }

    }

    public void imprimirVector() {
        String c = "";
        c = c + "El arreglo Almacenado es:" + "\n";
        for (int i = 0; i < numeros.size(); i++) {
            c = c + numeros.get(i) + "\n";
        }
        JOptionPane.showMessageDialog(null, c);
    }

    public void metodoBurbujaDescenso() {
        for (int i = 0; i < t - 1; i++) {
            for (int j = 0; j < t - 1; j++) {
                if (numeros.get(j) < numeros.get(j + 1)) {
                    intercambiar(j, (j + 1));
                }
            }
        }

    }

}
