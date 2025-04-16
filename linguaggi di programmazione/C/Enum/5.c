// Utilizzare un enum per indicare il risultato di un'operazione:

#include <stdio.h>

enum Risultato {
    Successo,
    Errore
};

enum Risultato somma(int a, int b) {
    int risultato = a + b;

    if (risultato > 100) {
        return Successo;
    } else {
        return Errore;
    }
}

int main() {
    int numero1 = 50;
    int numero2 = 70;

    enum Risultato risultatoSomma = somma(numero1, numero2);

    if (risultatoSomma == Successo) {
        printf("La somma dei numeri è maggiore di 100.\n");
    } else {
        printf("La somma dei numeri è minore o uguale a 100.\n");
    }

    return 0;
}