// Chiedere all'utente di inserire una stringa e calcolarne la lunghezza.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int lunghezza = strlen(stringa);

    printf("La lunghezza della stringa è: %d\n", lunghezza);

    return 0;
}