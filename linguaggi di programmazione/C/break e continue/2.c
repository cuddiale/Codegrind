// Calcolo della somma dei numeri da 1 a 100, interrompendo il ciclo quando si raggiunge una somma di almeno 500 utilizzando l'istruzione break:

#include <stdio.h>

int main() {
    int somma = 0;

    for (int i = 1; i <= 100; i++) {
        somma += i;

        if (somma >= 500) {
            break;
        }
    }

    printf("La somma dei numeri è: %d\n", somma);

    return 0;
}
