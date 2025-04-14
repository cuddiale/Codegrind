// Chiedere all'utente di inserire un numero intero N e stampare la tabella di moltiplicazione da 1 a N utilizzando un ciclo for annidato.

#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        for (int j = 1; j <= numero; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}