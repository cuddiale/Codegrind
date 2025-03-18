// Verificare se una HashMap contiene un determinato valore:

import java.util.HashMap;

HashMap<String, Integer> studenti = new HashMap<>();
studenti.put("Alice", 20);
studenti.put("Bob", 18);
studenti.put("Charlie", 22);

boolean contieneValore = studenti.containsValue(18);

System.out.println("La HashMap contiene il valore '18': " + contieneValore);