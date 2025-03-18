// Trovare la posizione di un elemento in un ArrayList di stringhe:

import java.util.ArrayList;

public class TrovaPosizioneElementoArrayList {
    public static void main(String[] args) {
        ArrayList<String> parole = new ArrayList<>();
        parole.add("casa");
        parole.add("cane");
        parole.add("gatto");

        int posizione = parole.indexOf("gatto");

        System.out.println("La parola 'gatto' si trova nella posizione: " + posizione);
    }
}