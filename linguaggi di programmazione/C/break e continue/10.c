// Stampa dei numeri da 1 a 100, saltando i multipli di 3 e 5 utilizzando l'istruzione continue:

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
