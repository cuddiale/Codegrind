// Crea una classe Automobile che implementa l'interfaccia Veicolo e implementa il metodo accelera per rappresentare l'accelerazione dell'automobile.

#include <iostream>
using namespace std;

class Veicolo {
public:
    virtual void accelera() = 0;
};

class Automobile : public Veicolo {
public:
    void accelera() override {
        cout << "L'automobile accelera." << endl;
    }
};

int main() {
    Veicolo* v = new Automobile();
    v->accelera();

    return 0;
}