// Eseguire un'operazione di shift a sinistra su un numero.

#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binario
    int risultato = a << 2; // 110000 in binario
    printf("Risultato di shift a sinistra: %d\n", risultato);
    return 0;
}