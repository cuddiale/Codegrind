// Utilizzare puntatori a funzione per implementare una semplice calcolatrice.

#include <stdio.h>

int somma(int a, int b) {
    return a + b;
}

int sottrazione(int a, int b) {
    return a - b;
}

int moltiplicazione(int a, int b) {
    return a * b;
}

int divisione(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Errore: divisione per zero\n");
        return 0;
    }
}

int main() {
    int (*operazione)(int, int);
    char operatore;
    int a = 10, b = 5;

    printf("Inserisci un'operazione (+, -, *, /): ");
    scanf(" %c", &operatore);

    switch (operatore) {
        case '+':
            operazione = somma;
            break;
        case '-':
            operazione = sottrazione;
            break;
        case '*':
            operazione = moltiplicazione;
            break;
        case '/':
            operazione = divisione;
            break;
        default:
            printf("Operatore non valido\n");
            return 1;
    }

    printf("Risultato: %d\n", operazione(a, b));
    return 0;
}