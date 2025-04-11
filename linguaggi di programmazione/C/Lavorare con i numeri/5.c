// Chiedere all'utente di inserire una base e un esponente interi e calcolare il risultato dell'elevamento a potenza.

#include <stdio.h>

int main() {
    int base, esponente, risultato = 1;

    printf("Inserisci la base: ");
    scanf("%d", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }

    printf("Il risultato dell'elevamento a potenza è: %d\n", risultato);

    return 0;
}