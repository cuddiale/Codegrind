// Utilizzare puntatori a puntatori per modificare il valore di una variabile.

#include <stdio.h>

void modifica_valore(int **ptr) {
    **ptr = 10;
}

int main() {
    int x = 5;
    int *p = &x;
    int **pp = &p;

    modifica_valore(pp);

    printf("Valore di x: %d\n", x);  // Output: 10
    return 0;
}