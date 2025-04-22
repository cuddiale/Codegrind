// Chiedere all'utente di inserire una stringa e convertirla in minuscolo.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int lunghezza = strlen(stringa);

    for (int i = 0; i < lunghezza; i++) {
        stringa[i] = tolower(stringa[i]);
    }

    printf("La stringa in minuscolo è: %s\n", stringa);

    return 0;
}