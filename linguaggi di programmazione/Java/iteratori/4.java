// Rimuovere gli elementi duplicati da una LinkedList utilizzando un iteratore:

import java.util.LinkedList;
import java.util.Iterator;

public class RimuoviDuplicatiLinkedList {
    public static void main(String[] args) {
        LinkedList<String> parole = new LinkedList<>();
        parole.add("ciao");
        parole.add("ciao");
        parole.add("mondo");
        parole.add("mondo");
        parole.add("!");

        Iterator<String> iterator = parole.iterator();

        while (iterator.hasNext()) {
            String parola = iterator.next();
            if (parole.indexOf(parola) != parole.lastIndexOf(parola)) {
                iterator.remove();
            }
        }

        System.out.println(parole);
    }
}