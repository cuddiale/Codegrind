// Utilizzare la concatenazione di token per creare identificatori dinamici.

#include <stdio.h>

#define CONCAT(x, y) x##y

int main() {
    int xy = 100;
    printf("Valore di xy: %d\n", CONCAT(x, y));
    return 0;
}