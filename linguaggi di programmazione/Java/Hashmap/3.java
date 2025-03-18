// Verificare se una HashMap contiene una determinata chiave:

import java.util.HashMap;

HashMap<String, Integer> studenti = new HashMap<>();
studenti.put("Alice", 20);
studenti.put("Bob", 18);
studenti.put("Charlie", 22);

boolean contieneChiave = studenti.containsKey("Bob");

System.out.println("La HashMap contiene la chiave 'Bob': " + contieneChiave);