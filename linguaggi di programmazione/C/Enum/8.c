// Utilizzare un enum per definire il tipo di veicolo:

#include <stdio.h>

enum TipoVeicolo {
    Auto,
    Moto,
    Bicicletta
};

void stampaTipoVeicolo(enum TipoVeicolo tipoVeicolo) {
    switch (tipoVeicolo) {
        case Auto:
            printf("Il veicolo è un'auto.\n");
            break;
        case Moto:
            printf("Il veicolo è una moto.\n");
            break;
        case Bicicletta:
            printf("Il veicolo è una bicicletta.\n");
            break;
        default:
            printf("Tipo di veicolo non valido.\n");
    }
}

int main() {
    enum TipoVeicolo veicolo1 = Auto;
    enum TipoVeicolo veicolo2 = Moto;
    enum TipoVeicolo veicolo3 = Bicicletta;

    stampaTipoVeicolo(veicolo1);
    stampaTipoVeicolo(veicolo2);
    stampaTipoVeicolo(veicolo3);

    return 0;
}