// Utilizzare una union per risparmiare memoria tra diversi tipi di dati.

#include <stdio.h>
#include <string.h>

union Dati {
    int i;
    float f;
    char str[20];
};

int main() {
    union Dati dato;
    printf("Dimensione di union Dati: %lu\n", sizeof(dato));

    dato.i = 10;
    printf("Intero: %d\n", dato.i);

    dato.f = 3.14;
    printf("Float: %f\n", dato.f);

    strcpy(dato.str, "Hello");
    printf("Stringa: %s\n", dato.str);

    return 0;
}