// Passaggio di un puntatore a una funzione per modificare una variabile:

#include <stdio.h>

void modificaVariabile(int *variabile) {
    *variabile = 100;
}

int main() {
    int numero = 50;

    printf("Prima della modifica: numero = %d\n", numero);

    modificaVariabile(&numero);

    printf("Dopo la modifica: numero = %d\n", numero);

    return 0;
}