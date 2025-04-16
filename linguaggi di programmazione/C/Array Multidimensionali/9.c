// Moltiplicazione di due matrici 3x3:

#include <stdio.h>

int main() {
    int matrice1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrice2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int matriceProdotto[3][3] = {0};

    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            for (int k = 0; k < 3; k++) {
                matriceProdotto[riga][colonna] += matrice1[riga][k] * matrice2[k][colonna];
            }
        }
    }

    printf("Matrice prodotto:\n");
    for (int riga = 0; riga < 3; riga++) {
        for (int colonna = 0; colonna < 3; colonna++) {
            printf("%d ", matriceProdotto[riga][colonna]);
        }
        printf("\n");
    }

    return 0;
}