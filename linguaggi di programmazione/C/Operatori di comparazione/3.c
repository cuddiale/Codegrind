// Chiedere all'utente di inserire un numero e verificare se è uguale a zero.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int confronto = (numero == 0);

    printf("Il numero è uguale a zero: %d\n", confronto);

    return 0;
}
