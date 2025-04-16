// Utilizzare puntatori per accedere ai membri di una union.

#include <stdio.h>

union Dati {
    int intero;
    float decimale;
    char carattere;
};

int main() {
    union Dati d;
    d.intero = 100;

    int *pIntero = &d.intero;
    printf("Intero tramite puntatore: %d\n", *pIntero);

    d.decimale = 3.14;
    float *pDecimale = &d.decimale;
    printf("Float tramite puntatore: %f\n", *pDecimale);

    d.carattere = 'A';
    char *pCarattere = &d.carattere;
    printf("Carattere tramite puntatore: %c\n", *pCarattere);

    return 0

;
}