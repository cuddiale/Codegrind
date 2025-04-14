// Chiedere all'utente di inserire un numero romano (da I a X) e convertirlo in un numero decimale.

#include <stdio.h>

int main() {
    char numeroRomano;
    int numeroDecimale;

    printf("Inserisci un numero romano (da I a X): ");
    scanf(" %c", &numeroRomano);

    switch (numeroRomano) {
        case 'I':
            numeroDecimale = 1;
            break;
        case 'V':
            numeroDecimale = 5;
            break;
        case 'X':
            numeroDecimale = 10;
            break;
        default:
            printf("Numero romano non valido\n");
            return 0;
    }

    printf("Il numero decimale corrispondente è: %d\n", numeroDecimale);

    return 0;
}