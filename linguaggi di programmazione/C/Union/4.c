// Confrontare la dimensione di una union e di una struct con gli stessi membri.

#include <stdio.h>

union DatiUnion {
    int i;
    float f;
    char c;
};

struct DatiStruct {
    int i;
    float f;
    char c;
};

int main() {
    union DatiUnion u;
    struct DatiStruct s;

    printf("Dimensione di union: %lu\n", sizeof(u));
    printf("Dimensione di struct: %lu\n", sizeof(s));

    return 0;
}