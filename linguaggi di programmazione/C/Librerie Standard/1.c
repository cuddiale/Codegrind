// Leggere un intero dall'utente e stamparlo usando `stdio.h`.

#include <stdio.h>

int main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    printf("Hai inserito: %d\n", numero);
    return 0;
}