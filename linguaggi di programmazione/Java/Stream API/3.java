// Utilizzare le Stream API per calcolare la somma di una lista di numeri interi.

import java.util.Arrays;
import java.util.List;

public class RiduzioneLista {
    public static void main(String[] args) {
        List<Integer> numeri = Arrays.asList(1, 2, 3, 4, 5);
        int somma = numeri.stream()
                          .reduce(0, Integer::sum);

        System.out.println("Somma dei numeri: " + somma);
    }
}