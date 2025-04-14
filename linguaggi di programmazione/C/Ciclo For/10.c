// Definire un array di numeri e calcolare il valore medio utilizzando un ciclo for.

#include <stdio.h>

int main() {
    int numeri[] = {5, 8, 12, 3, 10};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += numeri[i];
    }

    float media = (float)somma / lunghezza;

    printf("Il valore medio dell'array è: %.2f\n", media);

    return 0;
}