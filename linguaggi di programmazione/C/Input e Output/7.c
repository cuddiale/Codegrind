// Leggere un intero e una stringa dall'utente e stamparli.

#include <stdio.h>

int main() {
    int numero;
    char stringa[100];

    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    printf("Hai inserito il numero: %d\n", numero);
    printf("Hai inserito la stringa: %s\n", stringa);

    return 0;
}