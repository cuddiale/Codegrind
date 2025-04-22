// Scrivere una funzione ricorsiva per calcolare il fattoriale di un numero.

#include <stdio.h>

int fattoriale(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fattoriale(n - 1);
    }
}

int main() {
    int numero = 5;
    printf("Fattoriale di %d = %d\n", numero, fattoriale(numero));
    return 0;
}