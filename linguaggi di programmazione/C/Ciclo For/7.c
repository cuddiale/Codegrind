// Chiedere all'utente di inserire una stringa e stampare i singoli caratteri della stringa utilizzando un ciclo for.

#include <stdio.h>

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    for (int i = 0; stringa[i] != '\0'; i++) {
        printf("%c ", stringa[i]);
    }

    return 0;
}