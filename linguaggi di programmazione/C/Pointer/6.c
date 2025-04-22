// Modifica di un array usando puntatori:

#include <stdio.h>

void raddoppiaElementiArray(int *array, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        *array *= 2;
        array++;
    }
}

int main() {
    int numeri[] = {1, 2, 3, 4, 5};

    printf("Array prima della modifica: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeri[i]);
    }

    raddoppiaElementiArray(numeri, 5);

    printf("\nArray dopo la modifica: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeri[i]);
    }

    printf("\n");

    return 0;
}