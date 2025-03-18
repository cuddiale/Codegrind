// Invertire l'ordine degli elementi in una LinkedList di stringhe:

import java.util.LinkedList;
import java.util.Collections;

LinkedList<String> parole = new LinkedList<>();
parole.add("casa");
parole.add("albero");
parole.add("auto");

Collections.reverse(parole);

for (String parola : parole) {
    System.out.println(parola);
}