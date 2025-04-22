// Chiedere all'utente di inserire una stringa e convertirla in maiuscolo.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int lunghezza = strlen(stringa);

    for (int i = 0; i < lunghezza; i++) {
        stringa[i] = toupper(stringa[i]);
    }

    printf("La stringa in maiuscolo è: %s\n", stringa);

    return 0;
}