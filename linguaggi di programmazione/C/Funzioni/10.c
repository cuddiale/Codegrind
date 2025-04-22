// Calcolo del valore assoluto di un numero:

#include <stdio.h>

int valoreAssoluto(int numero) {
    if (numero < 0) {
        return -numero;
    } else {
        return numero;
    }
}

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    int valore = valoreAssoluto(numero);

    printf("Il valore assoluto di %d è %d\n", numero, valore);

    return 0;
}