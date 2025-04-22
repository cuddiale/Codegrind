// Allocare dinamicamente una lista collegata di nodi, assegnare valori e deallocarla.

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* prossimo;
} Nodo;

int main() {
    Nodo* testa = (Nodo*)malloc(sizeof(Nodo));
    if (testa == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    testa->dato = 1;
    testa->prossimo = (Nodo*)malloc(sizeof(Nodo));
    if (testa->prossimo == NULL) {
        printf("Errore di allocazione della memoria\n");
        free(testa);
        return 1;
    }
    testa->prossimo->dato = 2;
    testa->prossimo->prossimo = (Nodo*)malloc(sizeof(Nodo));
    if (testa->prossimo->prossimo == NULL) {
        printf("Errore di allocazione della memoria\n");
        free(testa->prossimo);
        free(testa);
        return 1;
    }
    testa->prossimo->prossimo->dato = 3;
    testa->prossimo->prossimo->prossimo = NULL;

    Nodo* current = testa;
    while (current) {
        printf("%d ", current->dato);
        Nodo* daCancellare = current;
        current = current->prossimo;
        free(daCancellare);
    }
    printf("\nMemoria deallocata\n");
    return 0;
}