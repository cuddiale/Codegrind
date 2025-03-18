// Utilizzare le Stream API per ordinare una lista di stringhe in ordine alfabetico.

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class OrdinamentoLista {
    public static void main(String[] args) {
        List<String> parole = Arrays.asList("banana", "mela", "arancia", "kiwi");
        List<String> paroleOrdinate = parole.stream()
                                            .sorted()
                                            .collect(Collectors.toList());

        System.out.println("Parole ordinate: " + paroleOrdinate);
    }
}