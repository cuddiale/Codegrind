// Crea una classe derivata Cerchio dalla classe Figura con un membro privato raggio e implementa il metodo calcolaArea per calcolare e restituire l'area del cerchio.

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
    double calcolaArea() override {
        return 3.14159 * raggio * raggio;
    }
};

int main() {
    Figura* f = new Cerchio();
    // ...

    return 0;
}