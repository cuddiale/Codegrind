// Definire una union con diversi tipi di dati e assegnare un valore a ciascun membro.

#include <stdio.h>

union Dati {
    int i;
    float f;
    char c;
};

int main() {
    union Dati dato;
    dato.i = 10;
    printf("Intero: %d\n", dato.i);
    dato.f = 3.14;
    printf("Float: %f\n", dato.f);
    dato.c = 'A';
    printf("Char: %c\n", dato.c);
    return 0;
}