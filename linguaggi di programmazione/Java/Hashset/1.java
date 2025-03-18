// Aggiungere elementi a un HashSet di stringhe e stamparli:

import java.util.HashSet;

HashSet<String> colori = new HashSet<>();
colori.add("Rosso");
colori.add("Verde");
colori.add("Blu");

for (String colore : colori) {
    System.out.println(colore);
}
