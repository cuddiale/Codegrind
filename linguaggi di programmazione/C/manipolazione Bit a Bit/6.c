// Eseguire un'operazione di shift a destra su un numero.

#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binario
    int risultato = a >> 2; // 0011 in binario
    printf("Risultato di shift a destra: %d\n", risultato);
    return 0;
}