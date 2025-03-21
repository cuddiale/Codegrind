// Utilizzare un enumeratore come parametro di un metodo:

enum Colore {
    ROSSO, VERDE, BLU
}

static void stampaColorePreferito(Colore colore) {
    System.out.println("Il tuo colore preferito è: " + colore);
}

public static void main(String[] args) {
    Colore colorePreferito = Colore.ROSSO;

    stampaColorePreferito(colorePreferito);
}
