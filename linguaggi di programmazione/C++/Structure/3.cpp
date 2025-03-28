// Definisci una struttura "Punto" con i campi "x" e "y" e calcola la distanza tra due punti:

#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
    int x;
    int y;
};

double calcolaDistanza(Punto p1, Punto p2) {
    int diffX = p2.x - p1.x;
    int diffY = p2.y - p1.y;
    return sqrt(diffX * diffX + diffY * diffY);
}

int main() {
    Punto punto1 = {2, 3};
    Punto punto2 = {5, 7};

    double distanza = calcolaDistanza(punto1, punto2);

    cout << "Distanza tra i punti: " << distanza << endl;

    return 0;
}
