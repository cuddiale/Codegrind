// Calcolo del fattoriale di un numero, interrompendo il calcolo se il fattoriale supera un certo limite utilizzando l'istruzione break:

#include <stdio.h>

int main() {
    int numero;
    unsigned long long fattoriale = 1;
    unsigned long long limite = 1000000000; // Limite del fattoriale

    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fattoriale *= i;

        if (fattoriale > limite) {
            printf("Il fattoriale supera il limite consentito.\n");
            break;
        }
    }

    printf("Il fattoriale di %d è: %llu\n", numero, fattoriale);

    return 0;
}