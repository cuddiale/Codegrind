// Calcolare la media di una lista di numeri utilizzando un' espressione lambda:

import java.util.ArrayList;
import java.util.List;

public class MediaListaNumeriLambda {
    public static void main(String[] args) {
        List<Integer> numeri = new ArrayList<>();
        numeri.add(5);
        numeri.add(3);
        numeri.add(8);
        numeri.add(2);

        CalcolatoreMedia calcolatore = lista -> {
            int somma = 0;
            for (int numero : lista) {
                somma += numero;
            }
            return (double) somma / lista.size();
        };

        double media = calcolatore.calcola(numeri);

        System.out.println("La media è: " + media);
    }

    interface CalcolatoreMedia {
        double calcola(List<Integer> lista);
    }
}