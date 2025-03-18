// Calcolare la somma degli elementi in una LinkedList di numeri float:

import java.util.LinkedList;

LinkedList<Float> numeri = new LinkedList<>();
numeri.add(2.5f);
numeri.add(3.7f);
numeri.add(4.2f);
numeri.add(5.1f);

float somma = 0;
for (float numero : numeri) {
    somma += numero;
}

System.out.println("La somma degli elementi è: " + somma);