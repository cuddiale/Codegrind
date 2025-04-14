// Chiedere all'utente di inserire un numero e verificare se è sia positivo che dispari.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int verifica = (numero > 0) && (numero % 2 != 0);

    printf("Il numero è positivo e dispari: %d\n", verifica);

    return 0;
}