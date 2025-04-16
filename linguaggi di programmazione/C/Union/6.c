// Utilizzare una union per archiviare e accedere a dati eterogenei.

#include <stdio.h>

union Dati {
    int intero;
    float decimale;
    char carattere;
};

void stampaDati(union Dati d, char tipo) {
    if (tipo == 'i') {
        printf("Intero: %d\n", d.intero);
    } else if (tipo == 'f') {
        printf("Float: %f\n", d.decimale);
    } else if (tipo == 'c') {
        printf("Carattere: %c\n", d.carattere);
    }
}

int main() {
    union Dati d;
    d.intero = 100;
    stampaDati(d, 'i');

    d.decimale = 3.14;
    stampaDati(d, 'f');

    d.carattere = 'A';
    stampaDati(d, 'c');

    return 0;
}