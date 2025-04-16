// Ricerca del secondo valore più piccolo in un array:

#include <stdio.h>

int main() {
    int numeri[] = {5, 2, 8, 1, 7};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int minimo = numeri[0];
    int secondoMinimo = numeri[0];

    for (int i = 1; i < lunghezza; i++) {
        if (numeri[i] < minimo) {
            secondoMinimo = minimo;
            minimo = numeri[i];
        } else if (numeri[i] < secondoMinimo && numeri[i] != minimo) {
            secondoMinimo = numeri[i];
        }
    }

    printf("Il secondo valore più piccolo nell'array è: %d\n", secondoMinimo);

    return 0;
}
