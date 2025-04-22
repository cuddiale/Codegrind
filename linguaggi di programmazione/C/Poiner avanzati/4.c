// Allocare dinamicamente una matrice 2D e inizializzarla.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int righe = 3, colonne = 4;
    int **matrice = (int **)malloc(righe * sizeof(int *));
    for (int i = 0; i < righe; i++) {
        matrice[i] = (int *)malloc(colonne * sizeof(int));
    }

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            matrice[i][j] = i * colonne + j;
        }
    }

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < righe; i++) {
        free(matrice[i]);
    }
    free(matrice);

    return 0;
}