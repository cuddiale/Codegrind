// Chiedere all'utente di inserire un carattere e verificare se è una lettera maiuscola, minuscola o un numero utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    char carattere;

    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere);

    (carattere >= 'A' && carattere <= 'Z') ? printf("Il carattere è una lettera maiuscola.\n") :
    (carattere >= 'a' && carattere <= 'z') ? printf("Il carattere è una lettera minuscola.\n") :
    (carattere >= '0' && carattere <= '9') ? printf("Il carattere è un numero.\n") :
    printf("Il carattere non è una lettera o un numero.\n");

    return 0;
}
