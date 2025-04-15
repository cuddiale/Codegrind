// Calcolo del valore medio di un array di numeri utilizzando un ciclo while:

#include <stdio.h>

int main() {
    int numeri[] = {5, 8, 12, 3, 10};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int somma = 0;
    int i = 0;

    while (i < lunghezza) {
        somma += numeri[i];
        i++;
    }

    float media = (float)somma / lunghezza;

    printf("Il valore medio dell'array è: %.2f\n", media);

    return 0;
}