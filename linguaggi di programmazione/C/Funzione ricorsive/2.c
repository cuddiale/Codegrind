// Scrivere una funzione ricorsiva per calcolare l'n-esimo numero della serie di Fibonacci.

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int numero = 10;
    printf("Fibonacci di %d = %d\n", numero, fibonacci(numero));
    return 0;
}