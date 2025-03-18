// Rimuovere un elemento specifico da una LinkedList di stringhe:

import java.util.LinkedList;

LinkedList<String> nomi = new LinkedList<>();
nomi.add("Alice");
nomi.add("Bob");
nomi.add("Charlie");

nomi.remove("Bob");

for (String nome : nomi) {
    System.out.println(nome);
}