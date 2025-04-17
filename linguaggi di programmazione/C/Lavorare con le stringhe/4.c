// Chiedere all'utente di inserire due stringhe e confrontarle per determinare se sono uguali.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa1[100], stringa2[100];

    printf("Inserisci la prima stringa: ");
    scanf("%s", stringa1);

    printf("Inserisci la seconda stringa: ");
    scanf("%s", stringa2);

    int confronto = strcmp(stringa1, stringa2);

    if (confronto == 0) {
        printf("Le stringhe sono uguali.\n");
    } else {
        printf("Le stringhe sono diverse.\n");
    }

    return 0;
}
