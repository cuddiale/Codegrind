// Iterare su una HashMap utilizzando il ciclo for-each:

import java.util.HashMap;
import java.util.Map;

HashMap<String, Integer> studenti = new HashMap<>();
studenti.put("Alice", 20);
studenti.put("Bob", 18);
studenti.put("Charlie", 22);

for (Map.Entry<String, Integer> entry : studenti.entrySet()) {
    System.out.println("Nome: " + entry.getKey() + ", Età: " + entry.getValue());
}