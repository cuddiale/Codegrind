// Crea una classe Triangolo che rappresenti un triangolo nel piano cartesiano. Aggiungi i membri necessari per memorizzare le coordinate dei vertici. Implementa i metodi per impostare le coordinate e calcolare l'area del triangolo.

#include <iostream>
#include <cmath>
using namespace std;

class Triangolo {
private:
    float x1, y1; // Coordinate del primo vertice
    float x2, y2; // Coordinate del secondo vertice
    float x3, y3; // Coordinate del terzo vertice

public:


#include <iostream>
#include <cmath>
using namespace std;

class Triangolo {
private:
    double x1, y1;  // Coordinate del primo vertice
    double x2, y2;  // Coordinate del secondo vertice
    double x3, y3;  // Coordinate del terzo vertice

public:
    void setCoordinate(double newX1, double newY1, double newX2, double newY2, double newX3, double newY3) {
        x1 = newX1;
        y1 = newY1;
        x2 = newX2;
        y2 = newY2;
        x3 = newX3;
        y3 = newY3;
    }

    double calcolaArea() {
        return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
    }
};

int main() {
    Triangolo triangolo;
    triangolo.setCoordinate(0.0, 0.0, 3.0, 0.0, 0.0, 4.0);
    cout << "Area del triangolo: " << triangolo.calcolaArea() << endl;

    return 0;
}
