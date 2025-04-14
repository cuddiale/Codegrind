// Chiedere all'utente di inserire una stringa e verificare se è vuota.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    int verifica = (strlen(stringa) == 0);

    printf("La stringa è vuota: %d\n", verifica);

    return 0;
}