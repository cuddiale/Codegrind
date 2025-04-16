// Utilizzare un enum per indicare le operazioni matematiche:

#include <stdio.h>

enum Operazioni {
    Somma,
    Sottrazione,
    Moltiplicazione,
    Divisione
};

int calcola(int a, int b, enum Operazioni operazione) {
    switch (operazione) {
        case Somma:
            return a + b;
        case Sottrazione:
            return a - b;
        case Moltiplicazione:
            return a * b;
        case Divisione:
            return a / b;
        default:
            printf("Operazione non valida.\n");
            return 0;
    }
}

int main() {
    int numero1 = 10;
    int numero2 = 5;

    enum Operazioni operazione = Somma;

    int risultato = calcola(numero1, numero2, operazione);

    printf("Il risultato dell'operazione è %d\n", risultato);

    return 0;
}