// Iterare su una LinkedHashMap utilizzando un iteratore e stampare le chiavi e i valori:

import java.util.LinkedHashMap;
import java.util.Iterator;
import java.util.Map;

public class IteratoreLinkedHashMap {
    public static void main(String[] args) {
        LinkedHashMap<String, Integer> studenti = new LinkedHashMap<>();
        studenti.put("Alice", 20);
        studenti.put("Bob", 18);
        studenti.put("Charlie", 22);

        Iterator<Map.Entry<String, Integer>> iterator = studenti.entrySet().iterator();

        while (iterator.hasNext()) {
            Map.Entry<String, Integer> entry = iterator.next();
            String nome = entry.getKey();
            int eta = entry.getValue();
            System.out.println("Nome: " + nome + ", Età: " + eta);
        }
    }
}