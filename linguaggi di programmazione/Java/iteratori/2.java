// Rimuovere gli elementi pari da una LinkedList utilizzando un iteratore:

import java.util.LinkedList;
import java.util.Iterator;

public class RimuoviElementiPari {
    public static void main(String[] args) {
        LinkedList<Integer> numeri = new LinkedList<>();
        numeri.add(1);
        numeri.add(2);
        numeri.add(3);
        numeri.add(4);
        numeri.add(5);

        Iterator<Integer> iterator = numeri.iterator();

        while (iterator.hasNext()) {
            int numero = iterator.next();
            if (numero % 2 == 0) {
                iterator.remove();
            }
        }

        System.out.println(numeri);
    }
}