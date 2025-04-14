// Chiedere all'utente di inserire tre numeri e determinare il maggiore tra di essi.

#include <stdio.h>

int main() {
    int numero1, numero2, numero3;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &numero3);

    int confronto = (numero1 > numero2) ? ((numero1 > numero3) ? numero1 : numero3) : ((numero2 > numero3) ? numero2 : numero3);

    printf("Il numero maggiore è: %d\n", confronto);

    return 0;
}