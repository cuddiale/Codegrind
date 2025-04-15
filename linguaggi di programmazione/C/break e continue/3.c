// Stampa dei numeri pari da 1 a 20, saltando i numeri dispari utilizzando l'istruzione continue:

#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
