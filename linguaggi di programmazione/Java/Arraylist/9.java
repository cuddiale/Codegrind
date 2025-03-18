// Unire due ArrayList di stringhe:

import java.util.ArrayList;

public class UnisciArrayList {
    public static void main(String[] args) {
        ArrayList<String> lista1 = new ArrayList<>();
        lista1.add("a");
        lista1.add("b");

        ArrayList<String> lista2 = new ArrayList<>();
        lista2.add("c");
        lista2.add("d");

        ArrayList<String> risultato = new ArrayList<>();
        risultato.addAll(lista1);
        risultato.addAll(lista2);

        System.out.println("Risultato: " + risultato);
    }
}