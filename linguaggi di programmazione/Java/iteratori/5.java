// Iterare su una TreeMap utilizzando un iteratore e stampare le chiavi:

import java.util.TreeMap;
import java.util.Iterator;
import java.util.Map;

public class IteratoreTreeMap {
    public static void main(String[] args) {
        TreeMap<Integer, String> studenti = new TreeMap<>();
        studenti.put(1, "Alice");
        studenti.put(2, "Bob");
        studenti.put(3, "Charlie");

        Iterator<Integer> iterator = studenti.keySet().iterator();

        while (iterator.hasNext()) {
            int chiave = iterator.next();
            System.out.println(chiave);
        }
    }
}
