// Calcolare e stampare la potenza di un numero usando `math.h`.

#include <stdio.h>
#include <math.h>

int main() {
    double base = 2.0;
    double esponente = 3.0;
    double risultato = pow(base, esponente);
    printf("%.2f elevato alla potenza di %.2f è %.2f\n", base, esponente, risultato);
    return 0;
}