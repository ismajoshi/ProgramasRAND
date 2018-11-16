package Aplicacion;

import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 *
 * @author t0p01
 */
public class MezclaNatural {

    private Vector vect;

    public Vector getVect() {
        return vect;
    }

    public void imprimirArreglo() {
        String c = "";
        c = c + "Se ha generado el arreglo:" + "\n";
        for (int i = 0; i < vect.getV().size(); i++) {
            c = c + vect.getV().get(i) + "\n";
        }
        JOptionPane.showMessageDialog(null, c);
    }
    
    public void imprimirtemporal(int temp[]) {
        String c = "";
        c = c + "Paso Temporal :" + "\n";
        for (int i = 0; i < vect.getV().size(); i++) {
            c = c + temp[i] + "\n";
        }
        JOptionPane.showMessageDialog(null, c);
    }

    public void Mezcla() {

        int f;
        f = Integer.parseInt(JOptionPane.showInputDialog(null, "Total de numeros a ordenar?"));
        vect = new Vector(f);
        imprimirArreglo();
        

        /*String c="";
    for (int i=0;i<vect.getV().size();i++) 
    {
        c=c+"Ordenados son:"+vect.getV().get(i)+"\n";
    }
    JOptionPane.showMessageDialog(null, c);*/
    }

    void mergeSort(ArrayList<Integer> A, int bajo, int alto) {
        if (bajo < alto) //Si hay más de un elemento 
        {
            int medio = (alto + bajo) / 2;
            mergeSort(A, bajo, medio); //Llamada recursiva con la mitad de los elementos 
            mergeSort(A, medio + 1, alto); //Llamada recursiva con la otra mitad de los elementos 
            merge(A, bajo, medio + 1, alto);//Procedimiento que mezcla el resultado de las dos llamadas anteriores 
        }
    }

    void merge(ArrayList<Integer> A, int bajo, int bajo_2, int alto) {
        int i = bajo;//Variable de primer elemento de la primera subsecuencia 
        int finbajo = bajo_2 - 1; //Variable del último elemento de la primera subsecuencia 
        int j = bajo_2;//Variable del primer elemento de la segunda subsecuencia 
        int k = bajo; // posicion del temporal 

        /*Se introducen en un array Temporal los elementos ordenados 
de las dos subsecuencias, hasta el momento en que una de las 
subsecuencias ya tiene todos los elementos ordenados*/
        int Temp[] = new int[A.size()];
        while ((i <= finbajo) && (j <= alto)) {
            if (A.get(i) <= A.get(j)) {
                Temp[k++] = A.get(i++);
                imprimirtemporal(Temp);
            } else {
                Temp[k++] = A.get(j++);
                imprimirtemporal(Temp);
            }

        }
        while (i <= finbajo) //Si se agotaron todos los elementos de la segunda subsecuencia 
        {
            Temp[k++] = A.get(i++);
            imprimirtemporal(Temp);
        }
        while (j <= alto) //Si se agotaron los de la primera subsecuencia 
        {
            Temp[k++] = A.get(j++);
            imprimirtemporal(Temp);
        }

//Paso todos los elementos del Temporal al vector 
        for (i = bajo; i <= alto; i++) {
            A.set(i, Temp[i]);
        }
    }

}
