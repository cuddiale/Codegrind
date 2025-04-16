// Definire una struct che contiene una union e accedere ai suoi membri.

#include <stdio.h>
#include <string.h>

struct Contenitore {
    char tipo;
    union {
        int i;
        float f;
        char str[20];
    } dato;
};

int main() {
    struct Contenitore cont;
    cont.tipo = 'i';
    cont.dato.i = 100;
    if (cont.tipo == 'i') {
        printf("Intero: %d\n", cont.dato.i);
    }

    cont.tipo = 'f';
    cont.dato.f = 3.14;
    if (cont.tipo == 'f') {
        printf("Float: %f\n", cont.dato.f);
    }

    cont.tipo = 's';
    strcpy(cont.dato.str, "Ciao");
    if (cont.tipo == 's') {
        printf("Stringa: %s\n", cont.dato.str);
    }

    return 0;
}