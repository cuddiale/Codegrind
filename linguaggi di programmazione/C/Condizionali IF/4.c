// Chiedere all'utente di inserire un carattere e verificare se è una lettera maiuscola, minuscola o un numero.

#include <stdio.h>

int main() {
    char carattere;

    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere);

    if (carattere >= 'A' && carattere <= 'Z') {
        printf("Il carattere è una lettera maiuscola.\n");
    } else if (carattere >= 'a' && carattere <= 'z') {
        printf("Il carattere è una lettera minuscola.\n");
    } else if (carattere >= '0' && carattere <= '9') {
        printf("Il carattere è un numero.\n");
    } else {
        printf("Il carattere non è una lettera o un numero.\n");
    }

    return 0;
}