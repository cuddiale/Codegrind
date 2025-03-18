// Utilizzare le Stream API per filtrare una lista di numeri e ottenere solo i numeri pari.

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class FiltroLista {
    public static void main(String[] args) {
        List<Integer> numeri = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
        List<Integer> numeriPari = numeri.stream()
                                         .filter(n -> n % 2 == 0)
                                         .collect(Collectors.toList());

        System.out.println("Numeri pari: " + numeriPari);
    }
}