// Crea una classe derivata Moto dalla classe Veicolo e implementa il metodo stampaInfo per stampare le informazioni specifiche della moto.

#include <iostream>
#include <string>
using namespace std;

class Veicolo {
public:
    virtual void stampaInfo() {
        cout << "Informazioni sul veicolo." << endl;
    }
};

class Moto : public Veicolo {
public:
    void stampaInfo() override {
        cout << "Informazioni sulla moto." << endl;
    }
};

int main() {
    Veicolo* v = new Moto();
    // ...

    return 0;
}