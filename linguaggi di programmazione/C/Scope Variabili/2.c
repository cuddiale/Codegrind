// Dichiarare e utilizzare una variabile globale.

#include <stdio.h>

int variabile_globale = 20;

void funzione() {
    printf("Variabile globale: %d\n", variabile_globale);
}

int main() {
    funzione();
    return 0;
}