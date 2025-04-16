// Ricerca di un valore in una matrice 3x3:

#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int valoreDaCercare = 5;
    bool trovato = false;

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            if (matrice[riga][colonna] == valoreDaCercare) {
                trovato = true;
                break;
            }
        }
        if (trovato) {
            break;
        }
    }

    if (trovato) {
        printf("Il valore %d è presente nella matrice.\n", valoreDaCercare);
    } else {
        printf("Il valore %d non è presente nella matrice.\n", valoreDaCercare);
    }

    return 0;
}