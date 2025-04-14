// Chiedere all'utente di inserire un numero intero N e stampare i primi N numeri naturali utilizzando un ciclo for.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        printf("%d ", i);
    }

    return 0;
}