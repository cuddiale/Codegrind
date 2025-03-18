// Utilizzare le Stream API per mappare una lista di stringhe alla loro lunghezza.

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class MappaLista {
    public static void main(String[] args) {
        List<String> parole = Arrays.asList("ciao", "mondo", "stream", "api");
        List<Integer> lunghezze = parole.stream()
                                        .map(String::length)
                                        .collect(Collectors.toList());

        System.out.println("Lunghezze delle parole: " + lunghezze);
    }
}