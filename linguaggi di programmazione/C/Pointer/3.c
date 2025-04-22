// Incremento di un numero usando un puntatore:

#include <stdio.h>

void incrementaNumero(int *ptr) {
    (*ptr)++;
}

int main() {
    int numero = 5;

    printf("Prima dell'incremento: numero = %d\n", numero);

    incrementaNumero(&numero);

    printf("Dopo l'incremento: numero = %d\n", numero);

    return 0;
}
