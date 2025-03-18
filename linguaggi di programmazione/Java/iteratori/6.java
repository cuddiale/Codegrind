// Rimuovere gli elementi null da un HashSet utilizzando un iteratore:

import java.util.HashSet;
import java.util.Iterator;

public class RimuoviNullHashSet {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<>();
        set.add("Alice");
        set.add(null);
        set.add("Bob");
        set.add(null);
        set.add("Charlie");

        Iterator<String> iterator = set.iterator();

        while (iterator.hasNext()) {
            String elemento = iterator.next();
            if (elemento == null) {
                iterator.remove();
            }
        }

        System.out.println(set);
    }
}