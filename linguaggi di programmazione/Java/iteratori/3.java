// Iterare su una HashSet utilizzando un iteratore e calcolare la somma degli elementi:

import java.util.HashSet;
import java.util.Iterator;

public class SommaHashSet {
    public static void main(String[] args) {
        HashSet<Integer> numeri = new HashSet<>();
        numeri.add(1);
        numeri.add(2);
        numeri.add(3);
        numeri.add(4);
        numeri.add(5);

        Iterator<Integer> iterator = numeri.iterator();

        int somma = 0;

        while (iterator.hasNext()) {
            int numero = iterator.next();
            somma += numero;
        }

        System.out.println("La somma degli elementi è: " + somma);
    }
}