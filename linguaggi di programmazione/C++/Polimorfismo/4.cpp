// Crea una classe base Veicolo con un metodo virtuale stampaInfo che stampa le informazioni sul veicolo.

#include <iostream>
#include <string>
using namespace std;

class Veicolo {
public:
    virtual void stampaInfo() {
        cout << "Informazioni sul veicolo." << endl;
    }
};

int main() {
    Veicolo* v;
    // v = new Automobile();
    // v = new Moto();
    // ...

    return 0;
}