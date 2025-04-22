// Calcolo della somma e della media di un array usando puntatori:

#include <stdio.h>

void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media) {
    *somma = 0;

    for (int i = 0; i < dimensione; i++) {
        *somma += *array;
        array++;
    }

    *media = (float)(*somma) / dimensione;
}

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    int somma;
    float media;

    calcolaSommaEMedia(numeri, 5, &somma, &media);

    printf("La somma degli elementi dell'array è: %d\n", somma);
    printf("La media degli elementi dell'array è: %.2f\n", media);

    return 0;
}