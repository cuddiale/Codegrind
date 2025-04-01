// Crea una classe derivata Quadrato dalla classe Figura e implementa il metodo calcolaArea per calcolare e restituire l'area del quadrato.

#include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcolaArea() = 0;
};

class Quadrato : public Figura {
private:
    double lato;

public:
    Quadrato(double l) : lato(l) {}

    double calcolaArea() override {
        return lato * lato;
    }
};

int main() {
    Figura* f = new Quadrato(5.0);
    cout << "Area del quadrato: " << f->calcolaArea() << endl;

    return 0;
}