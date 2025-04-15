// Inversione dell'ordine degli elementi di un array:

#include <stdio.h>

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);

    printf("Array originale: ");
    for (int i = 0; i < lunghezza; i++) {
        printf("%d ", numeri[i]);
    }

    int temp;
    for (int i = 0; i < lunghezza / 2; i++) {
        temp = numeri[i];
        numeri[i] = numeri[lunghezza - 1 - i];
        numeri[lunghezza - 1 - i] = temp;
    }

    printf("\nArray invertito: ");
    for (int i = 0; i < lunghezza; i++) {
        printf("%d ", numeri[i]);
    }

    printf("\n");

    return 0;
}