// Dichiarare e utilizzare una variabile locale all'interno di una funzione.

#include <stdio.h>

void funzione() {
    int variabile_locale = 10;
    printf("Variabile locale: %d\n", variabile_locale);
}

int main() {
    funzione();
    return 0;
}