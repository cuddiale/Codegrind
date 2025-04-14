// Eseguire un'operazione XOR bit a bit tra due numeri.

#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binario
    int b = 10;  // 1010 in binario
    int risultato = a ^ b; // 0110 in binario
    printf("Risultato di XOR bit a bit: %d\n", risultato);
    return 0;
}