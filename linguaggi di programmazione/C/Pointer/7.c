// Passaggio di un array come parametro a una funzione usando puntatori:

#include <stdio.h>

void stampaArray(int *array, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", *array);
        array++;
    }

    printf("\n");
}

int main() {
    int numeri[] = {1, 2, 3, 4, 5};

    stampaArray(numeri, 5);

    return 0;
}