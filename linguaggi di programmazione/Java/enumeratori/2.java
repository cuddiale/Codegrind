// Utilizzare un enumeratore in un'istruzione switch:

enum Stato {
    ACCESO, SPENTO, IN_ATTESA
}

public static void main(String[] args) {
    Stato stato = Stato.ACCESO;

    switch (stato) {
        case ACCESO:
            System.out.println("Il dispositivo è acceso.");
            break;
        case SPENTO:
            System.out.println("Il dispositivo è spento.");
            break;
        case IN_ATTESA:
            System.out.println("Il dispositivo è in attesa.");
            break;
        default:
            System.out.println("Stato non valido.");
    }
}
