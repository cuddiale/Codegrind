// Ottenere la dimensione di un HashSet:

import java.util.HashSet;

HashSet<Integer> numeri = new HashSet<>();
numeri.add(1);
numeri.add(2);
numeri.add(3);

int dimensione = numeri.size();

System.out.println("La dimensione dell'HashSet è: " + dimensione);