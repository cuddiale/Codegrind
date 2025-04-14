// Chiedere all'utente di inserire una stringa e verificare se è palindroma (legge uguale al contrario).

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int lunghezza = strlen(stringa);
    int verifica = 1;

    for (int i = 0; i < lunghezza / 2; i++) {
        if (stringa[i] != stringa[lunghezza - 1 - i]) {
            verifica = 0;
            break;
        }
    }

    printf("La stringa è palindroma: %d\n", verifica);

    return 0;
}