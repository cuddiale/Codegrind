// Passare variabili come parametri a una funzione.

#include <stdio.h>

void funzione(int a, int b) {
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;
    funzione(x, y);
    return 0;
}