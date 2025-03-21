// Confrontare l'ordine degli enumeratori:

enum Livello {
    BASSO, MEDIO, ALTO
}

public static void main(String[] args) {
    Livello livello1 = Livello.BASSO;
    Livello livello2 = Livello.ALTO;

    if (livello1.ordinal() < livello2.ordinal()) {
        System.out.println("Il livello 1 è inferiore al livello 2.");
    } else if (livello1.ordinal() > livello2.ordinal()) {
        System.out.println("Il livello 1 è superiore al livello 2.");
    } else {
        System.out.println("I livelli sono uguali.");
    }
}