// Chiedere all'utente di inserire un numero intero positivo e calcolare il suo fattoriale utilizzando un ciclo for.

#include <stdio.h>

int main() {
    int numero;
    unsigned long long fattoriale = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fattoriale *= i;
    }

    printf("Il fattoriale di %d è: %llu\n", numero, fattoriale);

    return 0;
}