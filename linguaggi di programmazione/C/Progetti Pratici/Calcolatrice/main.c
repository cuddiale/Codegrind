#include <stdio.h>
#include "calcolatrice.h"

int main() {
    float num1, num2, risultato;
    char operazione;

    printf("Inserisci il primo numero: ");
    scanf("%f", &num1);

    printf("Inserisci l'operazione (+, -, *, /): ");
    scanf(" %c", &operazione);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);

    switch (operazione) {
        case '+':
            risultato = addizione(num1, num2);
            break;
        case '-':
            risultato = sottrazione(num1, num2);
            break;
        case '*':
            risultato = moltiplicazione(num1, num2);
            break;
        case '/':
            risultato = divisione(num1, num2);
            if (num2 == 0) {
                printf("Errore: divisione per zero\n");
                return 1;
            }
            break;
        default:
            printf("Operazione non valida\n");
            return 1;
    }

    printf("Risultato: %.2f\n", risultato);

    return 0;
}