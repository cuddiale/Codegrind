// Creare una classe annidata per rappresentare un punto 2D all'interno di una classe esterna.

#include <iostream>

class Grafica {
public:
    class Punto2D {
    private:
        int x, y;
    public:
        Punto2D(int x, int y) : x(x), y(y) {}
        void stampa() {
            std::cout << "Punto (" << x << ", " << y << ")" << std::endl;
        }
    };
};

int main() {
    Grafica::Punto2D punto(3, 4);
    punto.stampa();
    return 0;
}