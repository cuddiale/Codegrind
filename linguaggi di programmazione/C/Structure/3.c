// Definizione di una struttura "Punto" e calcolo della distanza tra due punti:

#include <stdio.h>
#include <math.h>

struct Punto {
    int x;
    int y;
};

float calcolaDistanza(struct Punto p1, struct Punto p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Punto punto1, punto2;

    printf("Inserisci le coordinate del primo punto:\n");
    printf("x: ");
    scanf("%d", &punto1.x);
    printf("y: ");
    scanf("%d", &punto1.y);

    printf("Inserisci le coordinate del secondo punto:\n");
    printf("x: ");
    scanf("%d", &punto2.x);
    printf("y: ");
    scanf("%d", &punto2.y);

    float distanza = calcolaDistanza(punto1, punto2);

    printf("La distanza tra i due punti è: %.2f\n", distanza);

    return 0;
}