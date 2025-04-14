// Chiedere all'utente di inserire una stringa e una sottostringa, quindi verificare se la stringa contiene la sottostringa.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100], sottostringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    printf("Inserisci una sottostringa: ");
    scanf("%s", sottostringa);

    int verifica = (strstr(stringa, sottostringa) != NULL);

    printf("La stringa contiene la sottostringa: %d\n", verifica);

    return 0;
}