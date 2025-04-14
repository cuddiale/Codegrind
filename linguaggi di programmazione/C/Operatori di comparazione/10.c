// Chiedere all'utente di inserire due numeri e verificare se il primo numero è minore o uguale al secondo.

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    int confronto = (numero1 <= numero2);

    printf("Il primo numero è minore o uguale al secondo: %d\n", confronto);

    return 0;
}