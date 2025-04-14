// Chiedere all'utente di inserire un numero e calcolarne il valore assoluto utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int valoreAssoluto = (numero < 0) ? -numero : numero;

    printf("Il valore assoluto del numero è: %d\n", valoreAssoluto);

    return 0;
}