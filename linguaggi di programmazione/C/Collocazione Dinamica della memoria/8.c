// Allocare dinamicamente una matrice triangolare inferiore, assegnare valori e deallocarla.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int** triangolare = (int**)malloc(n * sizeof(int*));
    if (triangolare == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    for (int i =

 0; i < n; ++i) {
        triangolare[i] = (int*)malloc((i + 1) * sizeof(int));
        if (triangolare[i] == NULL) {
            printf("Errore di allocazione della memoria\n");
            return 1;
        }
        for (int j = 0; j <= i; ++j) {
            triangolare[i][j] = (i + 1) * (j + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", triangolare[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; ++i) {
        free(triangolare[i]);
    }
    free(triangolare);
    printf("Memoria deallocata\n");
    return 0;
}