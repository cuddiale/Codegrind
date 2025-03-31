// Crea una classe Punto con membri privati x e y e un metodo pubblico stampaCoordinate che stampa le coordinate del punto.

#include <iostream>
using namespace std;

class Punto {
private:
    double x;
    double y;

public:
    void stampaCoordinate() {
        cout << "Le coordinate del punto sono (" << x << ", " << y << ")." << endl;
    }
};

int main() {
    Punto p;
    p.stampaCoordinate();

    return 0;
}