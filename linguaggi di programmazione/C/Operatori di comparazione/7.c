// Chiedere all'utente di inserire due caratteri e determinare l'ordine alfabetico tra di essi.

#include <stdio.h>

int main() {
    char carattere1, carattere2;

    printf("Inserisci il primo carattere: ");
    scanf(" %c", &carattere1);

    printf("Inserisci il secondo carattere: ");
    scanf(" %c", &carattere2);

    int confronto = (carattere1 < carattere2) ? carattere1 : carattere2;

    printf("Il carattere più piccolo nell'ordine alfabetico è: %c\n", confronto);

    return 0;
}