// Rimuovere un elemento specifico da un ArrayList di stringhe:

import java.util.ArrayList;

public class RimuoviElementoArrayList {
    public static void main(String[] args) {
        ArrayList<String> nomi = new ArrayList<>();
        nomi.add("Alice");
        nomi.add("Bob");
        nomi.add("Charlie");

        nomi.remove("Bob");

        for (String nome : nomi) {
            System.out.println(nome);
        }
    }
}