// Verifica se un numero è pari o dispari:

#include <stdio.h>

int isPari(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (isPari(numero)) {
        printf("%d è un numero pari.\n", numero);
    } else {
        printf("%d è un numero dispari.\n", numero);
    }

    return 0;
}
