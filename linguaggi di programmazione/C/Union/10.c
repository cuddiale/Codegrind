// Passare una union a una funzione e modificarne il contenuto.

#include <stdio.h>

union Dati {
    int intero;
    float decimale;
    char carattere;
};

void modificaUnion(union Dati *d, int tipo) {
    switch (tipo) {
        case 0:
            d->intero = 200;
            break;
        case 1:
            d->decimale = 6.28;
            break;
        case 2:
            d->carattere = 'B';
            break;
    }
}

int main() {
    union Dati d;

    modificaUnion(&d, 0);
    printf("Intero: %d\n", d.intero);

    modificaUnion(&d, 1);
    printf("Float: %f\n", d.decimale);

    modificaUnion(&d, 2);
    printf("Carattere: %c\n", d.carattere);

    return 0;
}