// Somma degli elementi lungo le colonne di una matrice 3x3:

#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sommaColonne[3] = {0};

    for (int colonna = 0; colonna < 3; colonna++) {
        for (int riga = 0; riga < 3; riga++) {
            sommaColonne[colonna] += matrice[riga][colonna];
        }
    }

    for (int colonna = 0; colonna < 3; colonna++) {
        printf("La somma degli elementi della colonna %d è: %d\n", colonna + 1, sommaColonne[colonna]);
    }

    return 0;
}