// Allocare dinamicamente una struttura, assegnare valori e deallocarla.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Punto;

int main() {
    Punto *p = (Punto *)malloc(sizeof(Punto));
    if (p == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    p->x = 10;
    p->y = 20;
    printf("Punto: (%d, %d)\n", p->x, p->y);
    free(p);
    printf("Memoria deallocata\n");
    return 0;
}