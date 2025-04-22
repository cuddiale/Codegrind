// Utilizzare un puntatore a struct per accedere e modificare i membri di una struct.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[50];
} Persona;

int main() {
    Persona *p = (Persona *)malloc(sizeof(Persona));
    p->id = 1;
    snprintf(p->nome, sizeof(p->nome), "Mario");

    printf("ID: %d, Nome: %s\n", p->id, p->nome);

    free(p);
    return 0;
}