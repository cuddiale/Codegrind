// Scrivere una funzione ricorsiva per contare il numero di cifre di un numero intero.

#include <stdio.h>

int conta_cifre(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + conta_cifre(n / 10);
    }
}

int main() {
    int numero = 12345;
    printf("Numero di cifre in %d = %d\n", numero, conta_cifre(numero));
    return 0;
}