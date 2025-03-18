// Utilizzare le Stream API per ottenere una lista di numeri distinti.

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class DistinctLista {
    public static void main(String[] args) {
        List<Integer> numeri = Arrays.asList(1, 2, 2, 3, 4, 4, 5);
        List<Integer> numeriDistinti = numeri.stream()
                                             .distinct()
                                             .collect(Collectors.toList());

        System.out.println("Numeri distinti: " + numeriDistinti);
    }
}