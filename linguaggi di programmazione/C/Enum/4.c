// Utilizzare un enum in un'istruzione switch:

#include <stdio.h>

enum Stato {
    Acceso,
    Spento,
    InStandBy
};

void stampaStato(enum Stato stato) {
    switch (stato) {
        case Acceso:
            printf("Il dispositivo è acceso.\n");
            break;
        case Spento:
            printf("Il dispositivo è spento.\n");
            break;
        case InStandBy:
            printf("Il dispositivo è in standby.\n");
            break;
        default:
            printf("Stato non valido.\n");
    }
}

int main() {
    enum Stato statoDispositivo = Acceso;

    stampaStato(statoDispositivo);

    return 0;
}