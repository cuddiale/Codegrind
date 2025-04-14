// Controllare se il terzo bit (da destra) di un numero è impostato.

#include <stdio.h>

int main() {
    int num = 12; // 1100 in binario
    int bit_position = 2; // Terzo bit (0-indexed)
    int maschera = 1 << bit_position;
    if (num & maschera) {
        printf("Il terzo bit è impostato.\n");
    } else {
        printf("Il terzo bit non è impostato.\n");
    }
    return 0;
