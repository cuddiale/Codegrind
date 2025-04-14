// Chiedere all'utente di inserire un numero e verificare se è positivo o negativo.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Il numero è positivo.\n");
    } else if (numero < 0) {
        printf("Il numero è negativo.\n");
    } else {
        printf("Il numero è zero.\n");
    }

    return 0;
}