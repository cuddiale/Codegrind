// Stampa dei primi N numeri naturali utilizzando un ciclo while:

#include <stdio.h>

int main() {
    int numero;
    int i = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        printf("%d ", i);
        i++;
    }

    return 0;
}