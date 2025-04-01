// Crea una classe derivata Quadrato dalla classe Figura con un membro privato lato e implementa il metodo calcolaArea per calcolare e restituire l'area del quadrato.

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
    double calcolaArea() override {
        return lato * lato;
    }
};

int main() {
    Figura* f = new Quadrato();
    // ...

    return 0;
}
