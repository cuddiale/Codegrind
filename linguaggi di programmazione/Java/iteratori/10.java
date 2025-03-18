// Rimuovere gli elementi negativi da un HashSet utilizzando un iteratore:

import java.util.HashSet;
import java.util.Iterator;

public class RimuoviElementiNegativi {
    public static void main(String[] args) {
        HashSet<Integer> numeri = new HashSet<>();
        numeri.add(1);
        numeri.add(-2);
        numeri.add(3);
        numeri.add(-4);
        numeri.add(5);

        Iterator<Integer> iterator = numeri.iterator();

        while (iterator.hasNext()) {
            int numero = iterator.next();
            if (numero < 0) {
                iterator.remove();
            }
        }

        System.out.println(numeri);
    }
}
