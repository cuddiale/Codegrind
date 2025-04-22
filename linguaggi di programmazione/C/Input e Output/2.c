// Leggere una stringa dall'utente e stamparla.

#include <stdio.h>

int main() {
    char stringa[100];
    printf("Inserisci una stringa: ");
    scanf("%99s", stringa);
    printf("Hai inserito: %s\n", stringa);
    return 0;
}