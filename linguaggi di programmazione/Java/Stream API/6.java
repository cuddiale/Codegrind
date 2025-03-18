// Utilizzare le Stream API per contare il numero di elementi in una lista di stringhe che iniziano con una lettera specifica.

import java.util.Arrays;
import java.util.List;

public class ConteggioElementi {
    public static void main(String[] args) {
        List<String> parole = Arrays.asList("apple", "banana", "avocado", "cherry", "apricot");
        long conteggio = parole.stream()
                               .filter(parola -> parola.startsWith("a"))
                               .count();

        System.out.println("Numero di parole che iniziano con 'a': " + conteggio);
    }
}