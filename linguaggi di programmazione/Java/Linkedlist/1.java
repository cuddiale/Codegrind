// Aggiungere elementi a una LinkedList di interi e stamparli:

import java.util.LinkedList;

LinkedList<Integer> numeri = new LinkedList<>();
numeri.add(5);
numeri.add(10);
numeri.add(15);
numeri.add(20);

for (int numero : numeri) {
    System.out.println(numero);
}