// Confrontare enumeratori:

enum Stato {
    ATTIVO, INATTIVO
}

public static void main(String[] args) {
    Stato stato1 = Stato.ATTIVO;
    Stato stato2 = Stato.INATTIVO;

    if (stato1 == stato2) {
        System.out.println("Gli stati sono uguali.");
    } else {
        System.out.println("Gli stati sono diversi.");
    }
}