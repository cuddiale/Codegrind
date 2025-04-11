// Dichiarare e utilizzare una variabile statica all'interno di una funzione.

#include <stdio.h>

void funzione() {
    static int variabile_statica = 0;
    variabile_statica++;
    printf("Variabile statica: %d\n", variabile_statica);
}

int main() {
    funzione();
    funzione();
    funzione();
    return 0;
}