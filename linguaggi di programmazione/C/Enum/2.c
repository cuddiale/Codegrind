// Utilizzare un enum come parametro di una funzione:

#include <stdio.h>

enum Mesi {
    Gennaio,
    Febbraio,
    Marzo,
    Aprile,
    Maggio,
    Giugno,
    Luglio,
    Agosto,
    Settembre,
    Ottobre,
    Novembre,
    Dicembre
};

void stampaMese(enum Mesi mese) {
    switch (mese) {
        case Gennaio:
            printf("Gennaio\n");
            break;
        case Febbraio:
            printf("Febbraio\n");
            break;
        case Marzo:
            printf("Marzo\n");
            break;
        case Aprile:
            printf("Aprile\n");
            break;
        case Maggio:
            printf("Maggio\n");
            break;
        case Giugno:
            printf("Giugno\n");
            break;
        case Luglio:
            printf("Luglio\n");
            break;
        case Agosto:
            printf("Agosto\n");
            break;
        case Settembre:
            printf("Settembre\n");
            break;
        case Ottobre:
            printf("Ottobre\n");
            break;
        case Novembre:
            printf("Novembre\n");
            break;
        case Dicembre:
            printf("Dicembre\n");
            break;
        default:
            printf("Mese non valido\n");
    }
}

int main() {
    enum Mesi meseCorrente = Settembre;

    stampaMese(meseCorrente);

    return 0;
}