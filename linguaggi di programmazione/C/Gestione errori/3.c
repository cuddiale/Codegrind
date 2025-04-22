// Gestire l'errore di divisione per zero.

#include <stdio.h>

int main() {
    int a = 10, b = 0;
    if (b == 0) {
        fprintf(stderr, "Errore: divisione per zero\n");
        return 1;
    }
    int risultato = a / b;
    printf("Risultato: %d\n", risultato);
    return 0;
}