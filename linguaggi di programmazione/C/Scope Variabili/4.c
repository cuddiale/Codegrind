// Utilizzare una variabile all'interno di un blocco di codice.

#include <stdio.h>

int main() {
    int x = 10;

    {
        int x = 20;
        printf("Valore di x all'interno del blocco: %d\n", x);
    }

    printf("Valore di x all'esterno del blocco: %d\n", x);

    return 0;
}