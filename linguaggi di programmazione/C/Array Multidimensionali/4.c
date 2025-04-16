// Ricerca del valore massimo in una matrice 3x3:

#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {5, 8, 12},
        {3, 10, 6},
        {9, 7, 4}
    };

    int massimo = matrice[0][0];

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            if (matrice[riga][colonna] > massimo) {
                massimo = matrice[riga][colonna];
            }
        }
    }

    printf("Il valore massimo nella matrice è: %d\n", massimo);

    return 0;
}