// Calcolo del fattoriale di un numero utilizzando un ciclo while:

#include <stdio.h>

int main() {
    int numero;
    unsigned long long fattoriale = 1;
    int i = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        fattoriale *= i;
        i++;
    }

    printf("Il fattoriale di %d è: %llu\n", numero, fattoriale);

    return 0;
}
