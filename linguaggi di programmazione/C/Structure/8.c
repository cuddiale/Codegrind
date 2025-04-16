// Definizione di una struttura "Punto" e calcolo del quadrante:

#include <stdio.h>

struct Punto {
    int x;
    int y;
};

int calcolaQuadrante(struct Punto punto) {
    if (punto.x > 0 && punto.y > 0) {
        return 1;
    } else if (punto.x < 0 && punto.y > 0) {
        return 2;
    } else if (punto.x < 0 && punto.y < 0) {
        return 3;
    } else if (punto.x > 0 && punto.y < 0) {
        return 4;
    } else {
        return 0;
    }
}

int main() {
    struct Punto punto;

    printf("Inserisci le coordinate del punto:\n");
    printf("x: ");
    scanf("%d", &punto.x);
    printf("y: ");
    scanf("%d", &punto.y);

    int quadrante = calcolaQuadrante(punto);

    if (quadrante == 0) {
        printf("Il punto si trova sull'origine del sistema di coordinate.\n");
    } else {
        printf("Il punto si trova nel quadrante %d.\n", quadrante);
    }

    return 0;
}