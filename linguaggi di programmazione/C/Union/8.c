// Utilizzare una union con un enum per determinare il tipo di dato archiviato.

#include <stdio.h>

enum TipoDato { INTERO, DECIMALE, CARATTERE };

union Dati {
    int intero;
    float decimale;
    char carattere;
};

void stampaDati(union Dati d, enum TipoDato tipo) {
    switch (tipo) {
        case INTERO:
            printf("Intero: %d\n", d.intero);
            break;
        case DECIMALE:
            printf("Float: %f\n", d.decimale);
            break;
        case CARATTERE:
            printf("Carattere: %c\n", d.carattere);
            break;
    }
}

int main() {
    union Dati d;
    enum TipoDato tipo;

    d.intero = 100;
    tipo = INTERO;
    stampaDati(d, tipo);

    d.decimale = 3.14;
    tipo = DECIMALE;
    stampaDati(d, tipo);

    d.carattere = 'A';
    tipo = CARATTERE;
    stampaDati(d, tipo);

    return 0;
}