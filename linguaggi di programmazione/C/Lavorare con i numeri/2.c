// Chiedere all'utente di inserire tre numeri interi e calcolare il loro prodotto.

#include <stdio.h>

int main() {
    int numero1, numero2, numero3, prodotto;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &numero3);

    prodotto = numero1 * numero2 * numero3;

    printf("Il prodotto dei tre numeri è: %d\n", prodotto);

    return 0;
}