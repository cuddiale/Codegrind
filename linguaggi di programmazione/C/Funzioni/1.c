// Calcolo del cubo di un numero:

#include <stdio.h>

int calcolaCubo(int numero) {
    return numero * numero * numero;
}

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int cubo = calcolaCubo(numero);

    printf("Il cubo di %d è %d\n", numero, cubo);

    return 0;
}
