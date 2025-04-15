// Stampa di un triangolo di asterischi utilizzando un ciclo while:

#include <stdio.h>

int main() {
    int numero;
    int i = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    while (i <= numero) {
        int j = 1;

        while (j <= i) {
            printf("* ");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
