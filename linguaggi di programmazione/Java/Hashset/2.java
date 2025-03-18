// Rimuovere un elemento specifico da un HashSet di interi:

import java.util.HashSet;

HashSet<Integer> numeri = new HashSet<>();
numeri.add(10);
numeri.add(20);
numeri.add(30);

numeri.remove(20);

for (Integer numero : numeri) {
    System.out.println(numero);
}
