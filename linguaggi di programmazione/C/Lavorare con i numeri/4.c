// Chiedere all'utente di inserire due numeri interi e calcolare il resto della divisione tra di essi.

#include <stdio.h>

int main() {
    int dividendo, divisore, resto;

    printf("Inserisci il dividendo: ");
    scanf("%d", &dividendo);

    printf("Inserisci il divisore: ");
    scanf("%d", &divisore);

    resto = dividendo % divisore;

    printf("Il resto della divisione è: %d\n", resto);

    return 0;
}