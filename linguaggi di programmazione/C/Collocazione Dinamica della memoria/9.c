// Allocare dinamicamente una pila, eseguire operazioni di push e pop e deallocare la memoria.

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* prossimo;
} Nodo;

typedef struct {
    Nodo* cima;
} Pila;

void push(Pila* pila, int val) {
    Nodo* nuovoNodo = (Nodo*)malloc(sizeof(Nodo));
    if (nuovoNodo == NULL) {
        printf("Errore di allocazione della memoria\n");
        return;
    }
    nuovoNodo->dato = val;
    nuovoNodo->prossimo = pila->cima;
    pila->cima = nuovoNodo;
}

int pop(Pila* pila) {
    if (pila->cima == NULL) {
        printf("Pila vuota!\n");
        exit(1);
    }
    Nodo* nodoDaCancellare = pila->cima;
    int val = nodoDaCancellare->dato;
    pila->cima = pila->cima->prossimo;
    free(nodoDaCancellare);
    return val;
}

int main() {
    Pila pila = { NULL };

    push(&pila, 1);
    push(&pila, 2);
    push(&pila, 3);

    printf("Pop: %d\n", pop(&pila));
    printf("Pop: %d\n", pop(&pila));
    printf("Pop: %d\n", pop(&pila));

    printf("Memoria deallocata\n");
    return 0;
}