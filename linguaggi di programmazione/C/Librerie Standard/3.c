// Calcolare e stampare la radice quadrata di un numero usando `math.h`.

#include <stdio.h>
#include <math.h>

int main() {
    double num = 16.0;
    double radice = sqrt(num);
    printf("La radice quadrata di %.2f è %.2f\n", num, radice);
    return 0;
}