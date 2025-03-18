// Trovare il valore associato a una chiave specifica in una HashMap:

import java.util.HashMap;

HashMap<String, Integer> studenti = new HashMap<>();
studenti.put("Alice", 20);
studenti.put("Bob", 18);
studenti.put("Charlie", 22);

int valore = studenti.get("Bob");

System.out.println("Il valore associato alla chiave 'Bob' è: " + valore);