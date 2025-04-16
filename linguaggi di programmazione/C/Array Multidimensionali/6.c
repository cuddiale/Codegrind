// Somma degli elementi lungo le righe di una matrice 3x3:

#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sommaRighe[3] = {0};

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            sommaRighe[riga] += matrice[riga][colonna];
        }
    }

    for (int riga = 0; riga < 3; riga++) {
        printf("La somma degli elementi della riga %d è: %d\n", riga + 1, sommaRighe[riga]);
    }

    return 0;
}