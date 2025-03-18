// Svuotare una HashMap:

import java.util.HashMap;

HashMap<String, Integer> studenti = new HashMap<>();
studenti.put("Alice", 20);
studenti.put("Bob", 18);
studenti.put("Charlie", 22);

studenti.clear();

System.out.println("La HashMap è stata svuotata: " + studenti);