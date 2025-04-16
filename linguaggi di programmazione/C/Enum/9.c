// Utilizzare un enum per definire le opzioni di un menu:

#include <stdio.h>

enum OpzioniMenu {
    Visualizza,
    Aggiungi,
    Modifica,
    Elimina,
    Esci
};

void eseguiOpzione(enum OpzioniMenu opzione) {
    switch (opzione) {
        case Visualizza:
            printf("Hai selezionato Visualizza.\n");
            break;
        case Aggiungi:
            printf("Hai selezionato Aggiungi.\n");
            break;
        case Modifica:
            printf("Hai selezionato Modifica.\n");
            break;
        case Elimina:
            printf("Hai selezionato Elimina.\n");
            break;
        case Esci:
            printf("Hai selezionato Esci.\n");
            break;
        default:
            printf("Opzione non valida.\n");
    }
}

int main() {
    enum OpzioniMenu opzioneScelta = Aggiungi;

    eseguiOpzione(opzioneScelta);

    return 0;
}