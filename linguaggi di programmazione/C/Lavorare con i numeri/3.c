// Chiedere all'utente di inserire due numeri interi e calcolare la divisione intera tra di essi.

#include <stdio.h>

int main() {
    int dividendo, divisore, risultato;

    printf("Inserisci il dividendo: ");
    scanf("%d", &dividendo);

    printf("Inserisci il divisore: ");
    scanf("%d", &divisore);

    risultato = dividendo / divisore;

    printf("Il risultato della divisione intera è: %d\n", risultato);

    return 0;
}