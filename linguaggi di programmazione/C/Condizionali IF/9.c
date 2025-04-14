// Chiedere all'utente di inserire l'età di una persona e verificare se è maggiorenne (età >= 18).

#include <stdio.h>

int main() {
    int eta;

    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    if (eta >= 18) {
        printf("La persona è maggiorenne.\n");
    } else {
        printf("La persona è minorenne.\n");
    }

    return 0;
}