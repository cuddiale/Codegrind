// Utilizzare una union per convertire tra tipi di dati diversi.

#include <stdio.h>

union Convertitore {
    int i;
    float f;
};

int main() {
    union Convertitore conv;
    conv.i = 1078523331;  // Bit pattern equivalente a 3.14 in float
    printf("Intero: %d\n", conv.i);
    printf("Float: %f\n", conv.f);
    return 0;
}