// Definizione di una struttura "Cerchio" e calcolo dell'area:

#include <stdio.h>
#define PI 3.14159

struct Cerchio {
    float raggio;
};

float calcolaArea(struct Cerchio cerchio) {
    return PI * cerchio.raggio * cerchio.raggio;
}

int main() {
    struct Cerchio cerchio;

    printf("Inserisci il raggio del cerchio: ");
    scanf("%f", &cerchio.raggio);

    float area = calcolaArea(cerchio);

    printf("L'area del cerchio è: %.2f\n", area);

    return 0;
}