// Utilizzare un enum per definire il livello di accesso:

#include <stdio.h>

enum LivelliAccesso {
    Utente,
    Amministratore,
    Sviluppatore
};

void eseguiAzione(enum LivelliAccesso livello) {
    switch (livello) {
        case Utente:
            printf("Benvenuto Utente.\n");
            break;
        case Amministratore:
            printf("Benvenuto Amministratore.\n");
            break;
        case Sviluppatore:
            printf("Benvenuto Sviluppatore.\n");
            break;
        default:
            printf("Livello di accesso non valido.\n");
    }
}

int main() {
    enum LivelliAccesso livelloUtente = Amministratore;

    eseguiAzione(livelloUtente);

    return 0;
}