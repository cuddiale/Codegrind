// Invertire l'ordine degli elementi in un ArrayList di stringhe:

import java.util.ArrayList;
import java.util.Collections;

public class InvertiOrdineArrayList {
    public static void main(String[] args) {
        ArrayList<String> parole = new ArrayList<>();
        parole.add("casa");
        parole.add("albero");
        parole.add("auto");

        Collections.reverse(parole);

        for (String parola : parole) {
            System.out.println(parola);
        }
    }
}
