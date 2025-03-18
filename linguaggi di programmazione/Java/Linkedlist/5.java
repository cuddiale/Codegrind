// Trovare la posizione di un elemento in una LinkedList di stringhe:

import java.util.LinkedList;

LinkedList<String> parole = new LinkedList<>();
parole.add("casa");
parole.add("cane");
parole.add("gatto");

int posizione = parole.indexOf("gatto");

System.out.println("La parola 'gatto' si trova nella posizione: " + posizione);