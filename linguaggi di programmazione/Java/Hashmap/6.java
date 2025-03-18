// Calcolare la dimensione di una HashMap:

import java.util.HashMap;

HashMap<String, Integer> studenti = new HashMap<>();
studenti.put("Alice", 20);
studenti.put("Bob", 18);
studenti.put("Charlie", 22);

int dimensione = studenti.size();

System.out.println("La dimensione della HashMap è: " + dimensione);