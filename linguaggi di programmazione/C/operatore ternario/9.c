// Chiedere all'utente di inserire l'età di una persona e verificare se è maggiorenne (età >= 18) utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int eta;

    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    (eta >= 18) ? printf("La persona è maggiorenne.\n") : printf("La persona è minorenne.\n");

    return 0;
}
