// Chiedere all'utente di inserire un numero e verificare se è positivo o negativo utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    (numero >= 0) ? printf("Il numero è positivo.\n") : printf("Il numero è negativo.\n");

    return 0;
}