// Crea una classe derivata Cerchio dalla classe Figura e implementa il metodo calcolaArea per calcolare e restituire l'area del cerchio.

#include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcolaArea() = 0;
};

class Cerchio : public Figura {
private:
    double raggio;

public:
    Cerchio(double r) : raggio(r) {}

    double calcolaArea() override {
        return 3.14159 * raggio * raggio;
    }
};

int main() {
    Figura* f = new Cerchio(3.0);
    cout << "Area del cerchio: " << f->calcolaArea() << endl;

    return 0;
}