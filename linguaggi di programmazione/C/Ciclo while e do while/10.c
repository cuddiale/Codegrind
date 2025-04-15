// Ricerca di un numero in un array utilizzando un ciclo do-while:

#include <stdio.h>

int main() {
    int numeri[] = {5, 8, 12, 3, 10};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int numeroDaCercare;
    int trovato = 0;
    int i = 0;

    printf("Inserisci un numero da cercare: ");
    scanf("%d", &numeroDaCercare);

    do {
        if (numeri[i] == numeroDaCercare) {
            trovato = 1;
            break;
        }
        i++;
    } while (i < lunghezza);

    if (trovato) {
        printf("Il numero è presente nell'array.\n");
    } else {
        printf("Il numero non è presente nell'array.\n");
    }

    return 0;
}