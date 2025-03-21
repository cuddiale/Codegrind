// Utilizzare una wildcard con lower bound per accettare una lista di elementi che sono supertipi di `Integer`.

import java.util.ArrayList;
import java.util.List;

public class WildcardLowerBound {
    public static void aggiungiNumeri(List<? super Integer> lista) {
        for (int i = 1; i <= 5; i++) {
            lista.add(i);
        }
    }

    public static void main(String[] args) {
        List<Number> listaNumeri = new ArrayList<>();
        aggiungiNumeri(listaNumeri);
        System.out.println("Lista: " + listaNumeri);
    }
}