// Trovare il valore massimo in un array:

#include <stdio.h>

int main() {
    int numeri[] = {12, 56, 34, 78, 9};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int massimo = numeri[0];

    for (int i = 1; i < lunghezza; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }

    printf("Il valore massimo dell'array è: %d\n", massimo);

    return 0;
}