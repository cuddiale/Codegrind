// Chiedere all'utente di inserire un numero e verificare se è compreso tra due estremi dati.

#include <stdio.h>

int main() {
    int numero, estremoMinimo, estremoMassimo;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    printf("Inserisci l'estremo minimo: ");
    scanf("%d", &estremoMinimo);

    printf("Inserisci l'estremo massimo: ");
    scanf("%d", &estremoMassimo);

    int verifica = (numero > estremoMinimo) && (numero < estremoMassimo);

    printf("Il numero è compreso tra gli estremi: %d\n", verifica);

    return 0;
}