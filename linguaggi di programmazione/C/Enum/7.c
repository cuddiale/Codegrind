// Utilizzare un enum per definire le costanti:

#include <stdio.h>

enum Costanti {
    PI = 3.14159,
    GRAVITA = 9.81,
    VELOCITA_LUCE = 299792458
};

int main() {
    float raggio = 5.0;
    float area = PI * raggio * raggio;

    printf("L'area del cerchio è %f\n", area);

    return 0;
}