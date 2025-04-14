// Chiedere all'utente di inserire un numero e verificare se è negativo o zero.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int verifica = (numero <= 0);

    printf("Il numero è negativo o zero: %d\n", verifica);

    return 0;
}
