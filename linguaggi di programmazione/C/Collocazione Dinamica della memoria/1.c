// Allocare dinamicamente un intero, assegnare un valore e deallocarlo.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    *ptr = 42;
    printf("Valore: %d\n", *ptr);
    free(ptr);
    printf("Memoria deallocata\n");
    return 0;
}