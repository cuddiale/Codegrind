// Chiedere all'utente di inserire un numero e verificare se è multiplo di 5 e/o di 7 utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    (numero % 5 == 0 && numero % 7 == 0) ? printf("Il numero è multiplo di 5 e di 7.\n") :
    (numero % 5 == 0) ? printf("Il numero è multiplo di 5.\n") :
    (numero % 7 == 0) ? printf("Il numero è multiplo di 7.\n") :
    printf("Il numero non è multiplo né di 5 né di 7.\n");

    return 0;
}