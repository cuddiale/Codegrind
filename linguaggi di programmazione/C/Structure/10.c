// Definizione di una struttura "Vettore" e somma degli elementi:

#include <stdio.h>

struct Vettore {
    int elementi[5];
};

int calcolaSomma(struct Vettore vettore) {
    int somma = 0;

    for (int i = 0; i < 5; i++) {
        somma += vettore.elementi[i];
    }

    return somma;
}

int main() {
    struct Vettore vettore;

    printf("Inserisci gli elementi del vettore:\n");

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vettore.elementi[i]);
    }

    int somma = calcolaSomma(vettore);

    printf("La somma degli elementi del vettore è: %d\n", somma);

    return 0;
}