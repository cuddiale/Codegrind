// Chiedere all'utente di inserire un numero binario e convertirlo in un numero decimale.

#include <stdio.h>

int main() {
    int numeroBinario;
    int numeroDecimale = 0;
    int potenza = 1;

    printf("Inserisci un numero binario: ");
    scanf("%d", &numeroBinario);

    while (numeroBinario > 0) {
        int cifra = numeroBinario % 10;
        numeroDecimale += cifra * potenza;
        potenza *= 2;
        numeroBinario /= 10;
    }

    printf("Il numero decimale corrispondente è: %d\n", numeroDecimale);

    return 0;
}