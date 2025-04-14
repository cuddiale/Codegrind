// Chiedere all'utente di inserire un numero e verificare se è pari o dispari.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Il numero è pari.\n");
    } else {
        printf("Il numero è dispari.\n");
    }

    return 0;
}