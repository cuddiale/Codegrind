// Chiedere all'utente di inserire due numeri interi e calcolare la loro somma.

#include <stdio.h>

int main() {
    int numero1, numero2, somma;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    somma = numero1 + numero2;

    printf("La somma dei due numeri è: %d\n", somma);

    return 0;
}
