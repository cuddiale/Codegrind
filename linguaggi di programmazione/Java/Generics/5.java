// Utilizzare una wildcard con upper bound per accettare una lista di elementi che sono sottotipi di `Number`.

import java.util.ArrayList;
import java.util.List;

public class WildcardUpperBound {
    public static void sommaNumeri(List<? extends Number> lista) {
        double somma = 0;
        for (Number numero : lista) {
            somma += numero.doubleValue();
        }
        System.out.println("Somma: " + somma);
    }

    public static void main(String[] args) {
        List<Integer> listaInteri = new ArrayList<>();
        listaInteri.add(1);
        listaInteri.add(2);
        listaInteri.add(3);
        sommaNumeri(listaInteri);

        List<Double> listaDouble = new ArrayList<>();
        listaDouble.add(1.1);
        listaDouble.add(2.2);
        listaDouble.add(3.3);
        sommaNumeri(listaDouble);
    }
}