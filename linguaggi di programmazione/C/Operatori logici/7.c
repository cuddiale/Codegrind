// Chiedere all'utente di inserire due valori booleani (0 o 1) e verificare se entrambe le condizioni sono vere.

#include <stdio.h>

int main() {
    int condizione1, condizione2;

    printf("Inserisci il valore della prima condizione (0 o 1): ");
    scanf("%d", &condizione1);

    printf("Inserisci il valore della seconda condizione (0 o 1): ");
    scanf("%d", &condizione2);

    int verifica = (condizione1 && condizione2);

    printf("Entrambe le condizioni sono vere: %d\n", verifica);

    return 0;
}