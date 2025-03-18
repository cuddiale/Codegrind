// Copiare gli elementi di un HashSet in un nuovo HashSet:

import java.util.HashSet;

HashSet<String> set1 = new HashSet<>();
set1.add("a");
set1.add("b");

HashSet<String> set2 = new HashSet<>(set1);

for (String elemento : set2) {
    System.out.println(elemento);
}
