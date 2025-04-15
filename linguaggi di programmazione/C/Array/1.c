// Calcolo della somma degli elementi di un array:

#include <stdio.h>

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += numeri[i];
    }

    printf("La somma degli elementi dell'array è: %d\n", somma);

    return 0;
}