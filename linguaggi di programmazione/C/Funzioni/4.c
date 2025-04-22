// Calcolo della somma di una sequenza di numeri:

#include <stdio.h>

int calcolaSomma(int sequenza[], int lunghezza) {
    int somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += sequenza[i];
    }

    return somma;
}

int main() {
    int lunghezza;

    printf("Inserisci la lunghezza della sequenza: ");
    scanf("%d", &lunghezza);

    int sequenza[lunghezza];

    printf("Inserisci gli elementi della sequenza:\n");
    for (int i = 0; i < lunghezza; i++) {
        scanf("%d", &sequenza[i]);
    }

    int somma = calcolaSomma(sequenza, lunghezza);

    printf("La somma della sequenza è: %d\n", somma);

    return 0;
}
