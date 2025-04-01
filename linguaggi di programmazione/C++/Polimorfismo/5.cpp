// Crea una classe derivata Automobile dalla classe Veicolo e implementa il metodo stampaInfo per stampare le informazioni specifiche dell'automobile.

#include <iostream>
#include <string>
using namespace std;

class Veicolo {
public:
    virtual void stampaInfo() {
        cout << "Informazioni sul veicolo." << endl;
    }
};

class Automobile : public Veicolo {
public:
    void stampaInfo() override {
        cout << "Informazioni sull'automobile." << endl;
    }
};

int main() {
    Veicolo* v = new Automobile();
    // ...

    return 0;
}
