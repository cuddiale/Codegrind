// Aggiungere elementi a un ArrayList di interi e stamparli:

import java.util.ArrayList;

public class AggiungiElementiArrayList {
    public static void main(String[] args) {
        ArrayList<Integer> numeri = new ArrayList<>();
        numeri.add(5);
        numeri.add(10);
        numeri.add(15);
        numeri.add(20);

        for (int numero : numeri) {
            System.out.println(numero);
        }
    }
}