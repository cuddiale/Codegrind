// Utilizzare un ciclo for per calcolare la somma dei numeri da 1 a 100 e stampare il risultato.

#include <stdio.h>

int main() {
    int somma = 0;

    for (int i = 1; i <= 100; i++) {
        somma += i;
    }

    printf("La somma dei numeri da 1 a 100 è: %d\n", somma);

    return 0;
}
