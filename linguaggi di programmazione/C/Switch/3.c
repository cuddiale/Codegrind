// Chiedere all'utente di inserire un numero da 1 a 12 che rappresenta un mese dell'anno e stampare la stagione corrispondente.

#include <stdio.h>

int main() {
    int numeroMese;

    printf("Inserisci un numero da 1 a 12: ");
    scanf("%d", &numeroMese);

    switch (numeroMese) {
        case 1:
        case 2:
        case 12:
            printf("Inverno\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Primavera\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Estate\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autunno\n");
            break;
        default:
            printf("Numero non valido\n");
    }

    return 0;
}