// Trasposizione di una matrice 3x3:

#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriceTrasposta[3][3];

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            matriceTrasposta[riga][colonna] = matrice[colonna][riga];
        }
    }

    printf("Matrice originale:\n");
    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            printf("%d ", matrice[riga][colonna]);
        }
        printf("\n");
    }

    printf("\nMatrice trasposta:\n");
    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            printf("%d ", matriceTrasposta[riga][colonna]);
        }
        printf("\n");
    }

    return 0;
}
