// Copia degli elementi di un array in un altro array:

#include <stdio.h>

int main() {
    int numeri[] = {2, 4, 6, 8, 10};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int copiaNumeri[lunghezza];

    for (int i = 0; i < lunghezza; i++) {
        copiaNumeri[i] = numeri[i];
    }

    printf("Array originale: ");
    for (int i = 0; i < lunghezza; i++) {
        printf("%d ", numeri[i]);
    }

    printf("\nArray copia: ");
    for (int i = 0; i < lunghezza; i++) {
        printf("%d ", copiaNumeri[i]);
    }

    printf("\n");

    return 0;
}
