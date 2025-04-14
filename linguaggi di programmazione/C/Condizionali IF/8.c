// Chiedere all'utente di inserire un numero e verificare se è multiplo di 5 e/o di 7.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero % 5 == 0 && numero % 7 == 0) {
        printf("Il numero è multiplo di 5 e di 7.\n");
    } else if (numero % 5 == 0) {
        printf("Il numero è multiplo di 5.\n");
    } else if (numero % 7 == 0) {
        printf("Il numero è multiplo di 7.\n");
    } else {
        printf("Il numero non è multiplo né di 5 né di 7.\n");
    }

    return 0;
}