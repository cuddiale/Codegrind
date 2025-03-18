// Unire due HashSet:

import java.util.HashSet;

HashSet<String> set1 = new HashSet<>();
set1.add("a");
set1.add("b");

HashSet<String> set2 = new HashSet<>();
set2.add("b");
set2.add("c");

set1.addAll(set2);

for (String elemento : set1) {
    System.out.println(elemento);
}