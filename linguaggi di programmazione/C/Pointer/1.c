// Dichiarazione di un puntatore e stampa del valore puntato:

#include <stdio.h>

int main() {
    int numero = 10;
    int *puntatore = &numero;

    printf("Valore puntato: %d\n", *puntatore);

    return 0;
}