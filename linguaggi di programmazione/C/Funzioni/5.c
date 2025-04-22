// Calcolo del fattoriale di un numero:

#include <stdio.h>

int calcolaFattoriale(int numero) {
    int fattoriale = 1;

    for (int i = 1; i <= numero; i++) {
        fattoriale *= i;
    }

    return fattoriale;
}

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int fattoriale = calcolaFattoriale(numero);

    printf("Il fattoriale di %d è %d\n", numero, fattoriale);

    return 0;
}
