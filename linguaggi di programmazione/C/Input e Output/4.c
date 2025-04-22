// Leggere due interi dall'utente e stamparne la somma.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("La somma è: %d\n", num1 + num2);
    return 0;
}