// Stampa dei numeri da 1 a 100, interrompendo la stampa quando si raggiunge un numero multiplo di 7 utilizzando l'istruzione break:

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);

        if (i % 7 == 0) {
            break;
        }
    }

    return 0;
}