// Somma di elementi di un array usando puntatori:

#include <stdio.h>

int sommaArray(int *array, int dimensione) {
    int somma = 0;

    for (int i = 0; i < dimensione; i++) {
        somma += *array;
        array++;
    }

    return somma;
}

int main() {
    int numeri[] = {1, 2, 3, 4, 5};

    int somma = sommaArray(numeri, 5);

    printf("La somma degli elementi dell'array è: %d\n", somma);

    return 0;
}
