// Chiedere all'utente di inserire una stringa e una sottostringa, quindi cercare la sottostringa all'interno della stringa.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100], sottostringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    printf("Inserisci una sottostringa: ");
    scanf("%s", sottostringa);

    char *trovato = strstr(stringa, sottostringa);

    if (trovato != NULL) {
        printf("La sottostringa è presente nella stringa.\n");
    } else {
        printf("La sottostringa non è presente nella stringa.\n");
    }

    return 0;
}