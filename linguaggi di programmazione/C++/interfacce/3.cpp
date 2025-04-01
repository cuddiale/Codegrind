// Crea una classe Moto che implementa l'interfaccia Veicolo e implementa il metodo accelera per rappresentare l'accelerazione della moto.

#include <iostream>
using namespace std;

class Veicolo {
public:
    virtual void accelera() = 0;
};

class Moto : public Veicolo {
public:
    void accelera() override {
        cout << "La moto accelera." << endl;
    }
};

int main() {
    Veicolo* v = new Moto();
    v->accelera();

    return 0;
}
