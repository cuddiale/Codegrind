// Allocare dinamicamente una matrice 2D di interi, assegnare valori e deallocarla.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3;
    int cols = 3;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    for (int i = 0; i < rows; ++i) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Errore di allocazione della memoria\n");
            return 1;
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = i * cols + j;
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    printf("Memoria deallocata\n");
    return 0;
}