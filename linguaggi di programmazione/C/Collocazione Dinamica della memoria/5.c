// Allocare dinamicamente un array di strutture, assegnare valori e deallocarlo.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Punto;

int main() {
    Punto *arr = (Punto *)malloc(3 * sizeof(Punto));
    if (arr == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    arr[0] = (Punto){1, 2};
    arr[1] = (Punto){3, 4};
    arr[2] = (Punto){5, 6};
    for (int i = 0; i < 3; ++i) {
        printf("Punto %d: (%d, %d)\n", i, arr[i].x, arr[i].y);
    }
    free(arr);
    printf("Memoria deallocata\n");
    return 0;
}