// Allocare dinamicamente una coda, eseguire operazioni di enqueue e dequeue e deallocare la memoria.

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* prossimo;
} Nodo;

typedef struct {
    Nodo* testa;
    Nodo* coda;
} Coda;

void enqueue(Coda* coda, int val) {
    Nodo* nuovoNodo = (Nodo*)malloc(sizeof(Nodo));
    if (nuovoNodo == NULL) {
        printf("Errore di allocazione della memoria\n");
        return;
    }
    nuovoNodo->dato = val;
    nuovoNodo->prossimo = NULL;
    if (coda->coda == NULL) {
        coda->testa = nuovoNodo;
    } else {
        coda->coda->prossimo = nuovoNodo;
    }
    coda->coda = nuovoNodo;
}

int dequeue(Coda* coda) {
    if (coda->testa == NULL) {
        printf("Coda vuota!\n");
        exit(1);
    }
    Nodo* nodoDaCancellare = coda->testa;
    int val = nodoDaCancellare->dato;
    coda->testa = coda->testa->prossimo;
    if (coda->testa == NULL) {
        coda->coda = NULL;
    }
    free(nodoDaCancellare);
    return val;
}

int main() {
    Coda coda = { NULL, NULL };

    enqueue(&coda, 1);
    enqueue(&coda, 2);
    enqueue(&coda, 3);

    printf("Dequeue: %d\n", dequeue(&coda));
    printf("Dequeue: %d\n", dequeue(&coda));
    printf("Dequeue: %d\n", dequeue(&coda));

    printf("Memoria deallocata\n");
    return 0;
}