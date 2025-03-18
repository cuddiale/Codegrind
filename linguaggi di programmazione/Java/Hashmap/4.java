// Copiare gli elementi di una HashMap in una nuova HashMap:

import java.util.HashMap;
import java.util.Map;

HashMap<String, Integer> studenti1 = new HashMap<>();
studenti1.put("Alice", 20);
studenti1.put("Bob", 18);
studenti1.put("Charlie", 22);

HashMap<String, Integer> studenti2 = new HashMap<>(studenti1);

for (Map.Entry<String, Integer> entry : studenti2.entrySet()) {
    System.out.println("Nome: " + entry.getKey() + ", Età: " + entry.getValue());
}
