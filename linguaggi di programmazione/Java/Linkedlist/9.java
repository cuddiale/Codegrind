// Unire due LinkedList di stringhe:

import java.util.LinkedList;

LinkedList<String> lista1 = new LinkedList<>();
lista1.add("a");
lista1.add("b");

LinkedList<String> lista2 = new LinkedList<>();
lista2.add("c");
lista2.add("d");

LinkedList<String> risultato = new LinkedList<>(lista1);
risultato.addAll(lista2);

System.out.println("Risultato: " + risultato);