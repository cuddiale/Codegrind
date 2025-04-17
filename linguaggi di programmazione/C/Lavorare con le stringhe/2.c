// Chiedere all'utente di inserire due stringhe e concatenarle insieme.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[100], stringa2[100];

    printf("Inserisci la prima stringa: ");
    scanf("%s", stringa1);

    printf("Inserisci la seconda stringa: ");
    scanf("%s", stringa2);

    strcat(stringa1, stringa2);

    printf("La stringa concatenata è: %s\n", stringa1);

    return 0;
}