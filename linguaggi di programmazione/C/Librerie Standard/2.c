// Generare e stampare un numero casuale usando `stdlib.h`.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = rand();
    printf("Numero casuale: %d\n", num);
    return 0;
}