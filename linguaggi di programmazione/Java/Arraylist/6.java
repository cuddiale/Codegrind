// Calcolare la somma degli elementi in un ArrayList di numeri float:

import java.util.ArrayList;

public class SommaElementiArrayList {
    public static void main(String[] args) {
        ArrayList<Float> numeri = new ArrayList<>();
        numeri.add(2.5f);
        numeri.add(3.7f);
        numeri.add(4.2f);
        numeri.add(5.1f);

        float somma = 0;
        for (float numero : numeri) {
            somma += numero;
        }

        System.out.println("La somma degli elementi è: " + somma);
    }
}