// Ordinamento degli elementi di un array in ordine crescente:

#include <stdio.h>

int main() {
    int numeri[] = {5, 3, 8, 2, 1};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);

    printf("Array originale: ");
    for (int i = 0; i < lunghezza; i++) {
        printf("%d ", numeri[i]);
    }

    int temp;
    for (int i = 0; i < lunghezza - 1; i++) {
        for (int j = i + 1; j < lunghezza; j++) {
            if (numeri[i] > numeri[j]) {
                temp = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp;
            }
        }
    }

    printf("\nArray ordinato in ordine crescente: ");
    for (int i = 0; i < lunghezza; i++) {
        printf("%d ", numeri[i]);
    }

    printf("\n");

    return 0;
}