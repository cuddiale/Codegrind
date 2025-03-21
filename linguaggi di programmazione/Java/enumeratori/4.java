// Iterare sugli enumeratori:

enum Punteggio {
    UNO, DUE, TRE, QUATTRO, CINQUE
}

public static void main(String[] args) {
    for (Punteggio punteggio : Punteggio.values()) {
        System.out.println(punteggio);
    }
}