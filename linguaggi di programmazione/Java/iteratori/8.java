// Rimuovere gli elementi dispari da un ArrayList utilizzando un iteratore:

import java.util.ArrayList;
import java.util.Iterator;

public class RimuoviElementiDispari {
    public static void main(String[] args) {
        ArrayList<Integer> numeri = new ArrayList<>();
        numeri.add(1);
        numeri.add(2);
        numeri.add(3);
        numeri.add(4);
        numeri.add(5);

        Iterator<Integer> iterator = numeri.iterator();

        while (iterator.hasNext()) {
            int numero = iterator.next();
            if (numero % 2 != 0) {
                iterator.remove();
            }
        }

        System.out.println(numeri);
    }
}
