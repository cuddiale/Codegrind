// Svuotare un HashSet:

import java.util.HashSet;

HashSet<Integer> numeri = new HashSet<>();
numeri.add(1);
numeri.add(2);
numeri.add(3);

numeri.clear();

System.out.println("L'HashSet è stato svuotato: " + numeri);