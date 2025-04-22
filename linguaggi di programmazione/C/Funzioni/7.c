// Conversione di una stringa in maiuscolo:

#include <stdio.h>
#include <ctype.h>

void convertiInMaiuscolo(char stringa[]) {
    int lunghezza = strlen(stringa);

    for (int i = 0; i < lunghezza; i++) {
        stringa[i] = toupper(stringa[i]);
    }
}

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    convertiInMaiuscolo(stringa);

    printf("La stringa in maiuscolo è: %s\n", stringa);

    return 0;
}
