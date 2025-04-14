// Chiedere all'utente di inserire un numero e verificare se è pari.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int verifica = (numero % 2 == 0);

    printf("Il numero è pari: %d\n", verifica);

    return 0;
}