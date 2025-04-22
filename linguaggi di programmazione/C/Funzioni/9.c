// Calcolo della potenza di un numero:

#include <stdio.h>

int calcolaPotenza(int base, int esponente) {
    int potenza = 1;

    for (int i = 1; i <= esponente; i++) {
        potenza *= base;
    }

    return potenza;
}

int main() {
    int base, esponente;

    printf("Inserisci la base: ");
    scanf("%d", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    int potenza = calcolaPotenza(base, esponente);

    printf("%d elevato a %d è %d\n", base, esponente, potenza);

    return 0;
}