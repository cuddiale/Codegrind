// Crea una classe base Veicolo con membri protetti marca e annoProduzione e un metodo pubblico impostaMarca che imposta la marca del veicolo.

#include <iostream>
#include <string>
using namespace std;

class Veicolo {
protected:
    string marca;
    int annoProduzione;

public:
    void impostaMarca(string newMarca) {
        marca = newMarca;
    }
};

int main() {
    Veicolo v;
    v.impostaMarca("Fiat");

    return 0;
}