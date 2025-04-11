// Chiedere all'utente di inserire il raggio di un cerchio e calcolarne l'area.

#include <stdio.h>

#define PI 3.14159

int main() {
    float raggio, area;

    printf("Inserisci il raggio del cerchio: ");
    scanf("%f", &raggio);

    area = PI * raggio * raggio;

    printf("L'area del cerchio è: %f\n", area);

    return 0;
}