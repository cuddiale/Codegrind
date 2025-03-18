// Iterare su una ArrayList utilizzando un iteratore e stampare gli elementi:

import java.util.ArrayList;
import java.util.Iterator;

public class IteratoreArrayList {
    public static void main(String[] args) {
        ArrayList<String> colori = new ArrayList<>();
        colori.add("Rosso");
        colori.add("Verde");
        colori.add("Blu");

        Iterator<String> iterator = colori.iterator();

        while (iterator.hasNext()) {
            String colore = iterator.next();
            System.out.println(colore);
        }
    }
}