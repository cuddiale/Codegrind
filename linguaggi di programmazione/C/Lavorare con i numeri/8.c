// Chiedere all'utente di inserire un numero e calcolarne il valore assoluto.

#include <stdio.h>

int main() {
    int numero, valoreAssoluto;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        valoreAssoluto = -numero;
    } else {
        valoreAssoluto = numero;
    }

    printf("Il valore assoluto del numero è: %d\n", valoreAssoluto);

    return 0;
}