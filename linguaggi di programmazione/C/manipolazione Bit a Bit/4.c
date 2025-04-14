// Eseguire un'operazione di negazione bit a bit su un numero.

#include <stdio.h>

int main() {
    int a = 12;  // 1100 in binario
    int risultato = ~a; // ...11110011 in binario (dipende dalla rappresentazione)
    printf("Risultato di negazione bit a bit: %d\n", risultato);
    return 0;
}