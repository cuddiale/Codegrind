// Ricerca e conteggio delle occorrenze di un elemento in un array:

#include <stdio.h>

int main() {
    int numeri[] = {3, 8, 4, 2, 8, 6, 8};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int numeroDaCercare;
    int conteggio = 0;

    printf("Inserisci un numero da cercare: ");
    scanf("%d", &numeroDaCercare);

    for (int i = 0; i < lunghezza; i++) {
        if (numeri[i] == numeroDaCercare) {
            conteggio++;
        }
    }

    printf("Il numero %d compare %d volte nell'array.\n", numeroDaCercare, conteggio);

    return 0;
}
