// Scrivere una funzione ricorsiva per calcolare la potenza di un numero dato una base e un esponente.

#include <stdio.h>

int potenza(int base, int esponente) {
    if (esponente == 0) {
        return 1;
    } else {
        return base * potenza(base, esponente - 1);
    }
}

int main() {
    int base = 2;
    int esponente = 3;
    printf("%d elevato alla potenza di %d = %d\n", base, esponente, potenza(base, esponente));
    return 0;
}