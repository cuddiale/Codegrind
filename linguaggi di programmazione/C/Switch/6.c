// Chiedere all'utente di inserire un numero intero e verificare se è pari o dispari utilizzando il blocco switch.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    switch (numero % 2) {
        case 0:
            printf("Il numero è pari.\n");
            break;
        case 1:
            printf("Il numero è dispari.\n");
            break;
    }

    return 0;
}
