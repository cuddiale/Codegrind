// Utilizzare puntatori a funzione per chiamare diverse funzioni in base a una condizione.

#include <stdio.h>

void saluta() {
    printf("Ciao!\n");
}

void addio() {
    printf("Addio!\n");
}

int main() {
    void (*funzione_ptr)();
    int condizione = 1;

    if (condizione) {
        funzione_ptr = saluta;
    } else {
        funzione_ptr = addio;
    }

    funzione_ptr();
    return 0;
}