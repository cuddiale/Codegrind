// Stampa dei numeri da 1 a 10, saltando il numero 5 utilizzando l'istruzione continue:

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}