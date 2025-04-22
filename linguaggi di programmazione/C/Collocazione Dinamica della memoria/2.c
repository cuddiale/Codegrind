// Allocare dinamicamente un array di interi, assegnare valori e deallocarlo.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    free(arr);
    printf("Memoria deallocata\n");
    return 0;
}