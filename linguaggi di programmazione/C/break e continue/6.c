// Ricerca di un numero in un array, interrompendo la ricerca quando il numero viene trovato utilizzando l'istruzione break:

#include <stdio.h>

int main() {
    int numeri[] = {5, 8, 12, 3, 10};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int numeroDaCercare;
    int trovato = 0;

    printf("Inserisci un numero da cercare: ");
    scanf("%d", &numeroDaCercare);

    for (int i = 0; i < lunghezza; i++) {
        if (numeri[i] == numeroDaCercare) {
            trovato = 1;
            break;
        }
    }

    if (trovato) {
        printf("Il numero è presente nell'array.\n");
    } else {
        printf("Il numero non è presente nell'array.\n");
    }

    return 0;
}