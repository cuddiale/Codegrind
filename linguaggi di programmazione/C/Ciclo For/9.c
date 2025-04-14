// Chiedere all'utente di inserire un numero intero N e stampare un triangolo di asterischi di altezza N utilizzando un ciclo for annidato.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
