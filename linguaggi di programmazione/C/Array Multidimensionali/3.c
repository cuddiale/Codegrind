// Calcolo della media degli elementi di una matrice 3x3:

#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int somma = 0;

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            somma += matrice[riga][colonna];
        }
    }

    float media = (float)somma / 9;

    printf("La media degli elementi della matrice è: %.2f\n", media);

    return 0;
}