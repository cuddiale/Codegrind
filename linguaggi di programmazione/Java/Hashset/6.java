// Calcolare l'intersezione di due HashSet:

import java.util.HashSet;

HashSet<Integer> set1 = new HashSet<>();
set1.add(1);
set1.add(2);
set1.add(3);

HashSet<Integer> set2 = new HashSet<>();
set2.add(3);
set2.add(4);
set2.add(5);

set1.retainAll(set2);

for (Integer elemento : set1) {
    System.out.println(elemento);
}