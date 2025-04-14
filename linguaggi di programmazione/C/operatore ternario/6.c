// Chiedere all'utente di inserire due numeri e determinare il massimo tra i due utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    int massimo = (numero1 > numero2) ? numero1 : numero2;

    printf("Il massimo tra i due numeri è: %d\n", massimo);

    return 0;
}