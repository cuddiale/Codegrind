// Utilizzare una variabile register per ottimizzare l'accesso.

#include <stdio.h>

int main() {
    register int x = 10;
    printf("Variabile register: %d\n", x);
    return 0;
}