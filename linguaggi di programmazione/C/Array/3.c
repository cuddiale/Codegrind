// Calcolo della media degli elementi di un array:

#include <stdio.h>

int main() {
    int numeri[] = {10, 20, 30, 40, 50};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    float somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += numeri[i];
    }

    float media = somma / lunghezza;

    printf("La media degli elementi dell'array è: %.2f\n", media);

    return 0;
}