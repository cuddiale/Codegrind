// Chiedere all'utente di inserire un numero da 1 a 12 che rappresenta un mese dell'anno e stampare il numero di giorni corrispondente.

#include <stdio.h>

int main() {
    int numeroMese;
    int numeroGiorni;

    printf("Inserisci un numero da 1 a 12: ");
    scanf("%d", &numeroMese);

    switch (numeroMese) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            numeroGiorni = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            numeroGiorni = 30;
            break;
        case 2:
            numeroGiorni = 28;
            break;
        default:
            printf("Numero non valido\n");
            return 0;
    }

    printf("Il numero di giorni nel mese è: %d\n", numeroGiorni);

    return 0;
}