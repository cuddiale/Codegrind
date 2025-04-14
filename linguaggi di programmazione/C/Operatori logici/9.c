// Chiedere all'utente di inserire 5 numeri interi in un array e verificare se almeno uno dei valori è pari.

#include <stdio.h>

int main() {
    int numeri[5];

    printf("Inserisci 5 numeri interi:\n");

    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    int verifica = 0;

    for (int i = 0; i < 5; i++) {
        if (numeri[i] % 2 == 0) {
            verifica = 1;
            break;
        }
    }

    printf("Almeno uno dei valori è pari: %d\n", verifica);

    return 0;
}
