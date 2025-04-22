// Utilizzare un puntatore a costante per garantire che il valore puntato non possa essere modificato.

#include <stdio.h>

int main() {
    int x = 10;
    const int *ptr = &x;

    printf("Valore di x: %d\n", *ptr);
    // *ptr = 20; // Errore: non è possibile modificare il valore puntato

    x = 20; // Questo è permesso
    printf("Nuovo valore di x: %d\n", *ptr);

    return 0;
}