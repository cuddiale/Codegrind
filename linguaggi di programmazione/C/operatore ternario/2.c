// Chiedere all'utente di inserire un numero e verificare se è pari o dispari utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    (numero % 2 == 0) ? printf("Il numero è pari.\n") : printf("Il numero è dispari.\n");

    return 0;
}