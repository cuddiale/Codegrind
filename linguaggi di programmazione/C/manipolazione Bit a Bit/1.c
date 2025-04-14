// Eseguire un'operazione AND bit a bit tra due numeri.

#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binario
    int b = 10;  // 1010 in binario
    int risultato = a & b; // 1000 in binario
    printf("Risultato di AND bit a bit: %d\n", risultato);
    return 0;
}