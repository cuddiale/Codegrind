// Calcolare la somma di una lista di numeri utilizzando un' espressione lambda:

import java.util.ArrayList;
import java.util.List;

public class SommaListaNumeriLambda {
    public static void main(String[] args) {
        List<Integer> numeri = new ArrayList<>();
        numeri.add(5);
        numeri.add(3);
        numeri.add(8);
        numeri.add(2);

        Sommatore sommatore = lista -> {
            int somma = 0;
            for (int numero : lista) {
                somma += numero;
            }
            return somma;
        };

        int risultato = sommatore.somma(numeri);

        System.out.println("La somma è: " + risultato);
    }

    interface Sommatore {
        int somma(List<Integer> lista);
    }
}