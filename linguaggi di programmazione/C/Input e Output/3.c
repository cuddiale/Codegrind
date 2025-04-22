// Leggere un numero decimale dall'utente e stamparlo.

#include <stdio.h>

int main() {
    float numero;
    printf("Inserisci un numero decimale: ");
    scanf("%f", &numero);
    printf("Hai inserito: %.2f\n", numero);
    return 0;
}