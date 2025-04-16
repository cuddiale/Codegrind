// Conteggio dei numeri pari e dispari in un array:

#include <stdio.h>

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int pari = 0;
    int dispari = 0;

    for (int i = 0; i < lunghezza; i++) {
        if (numeri[i] % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    printf("Numeri pari: %d\n", pari);
    printf("Numeri dispari: %d\n", dispari);

    return 0;
}