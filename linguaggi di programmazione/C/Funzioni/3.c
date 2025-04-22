// Calcolo del massimo tra due numeri:

#include <stdio.h>

int calcolaMassimo(int numero1, int numero2) {
    if (numero1 > numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

int main() {
    int numero1, numero2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);

    int massimo = calcolaMassimo(numero1, numero2);

    printf("Il massimo tra %d e %d è %d\n", numero1, numero2, massimo);

    return 0;
}
