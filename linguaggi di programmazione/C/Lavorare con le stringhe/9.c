// Chiedere all'utente di inserire una stringa con spazi bianchi iniziali e/o finali e rimuoverli.

#include <stdio.h>
#include <string.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa con spazi bianchi iniziali e/o finali: ");
    scanf("%[^\n]s", stringa);

    int lunghezza = strlen(stringa);
    int inizio = 0, fine = lunghezza - 1;

    while (stringa[inizio] == ' ') {
        inizio++;
    }

    while (stringa[fine] == ' ') {
        fine--;
    }

    stringa[fine + 1] = '\0';

    printf("La stringa senza spazi bianchi è: %s\n", stringa + inizio);

    return 0;
}