// Scambio di due numeri usando puntatori:

#include <stdio.h>

void scambiaNumeri(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int numero1 = 5;
    int numero2 = 10;

    printf("Prima dello scambio: numero1 = %d, numero2 = %d\n", numero1, numero2);

    scambiaNumeri(&numero1, &numero2);

    printf("Dopo lo scambio: numero1 = %d, numero2 = %d\n", numero1, numero2);

    return 0;
}