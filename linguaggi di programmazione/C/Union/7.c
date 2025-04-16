// Utilizzare una union con un array per accedere ai dati in modo diverso.

#include <stdio.h>

union Dati {
    int interi[2];
    float decimali[2];
};

int main() {
    union Dati d;

    d.interi[0] = 1;
    d.interi[1] = 2;
    printf("Interi: %d, %d\n", d.interi[0], d.interi[1]);

    d.decimali[0] = 3.14;
    d.decimali[1] = 6.28;
    printf("Float: %f, %f\n", d.decimali[0], d.decimali[1]);

    return 0;
}