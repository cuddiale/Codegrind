// Iterare su una PriorityQueue utilizzando un iteratore e stampare gli elementi:

import java.util.PriorityQueue;
import java.util.Iterator;

public class IteratorePriorityQueue {
    public static void main(String[] args) {
        PriorityQueue<String> coda = new PriorityQueue<>();
        coda.offer("Rosso");
        coda.offer("Verde");
        coda.offer("Blu");

        Iterator<String> iterator = coda.iterator();

        while (iterator.hasNext()) {
            String elemento = iterator.next();
            System.out.println(elemento);
        }
    }
}