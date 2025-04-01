// Crea una classe derivata Automobile dalla classe Veicolo con un membro privato modello e un metodo pubblico impostaModello che imposta il modello dell'automobile.

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

class Automobile : public Veicolo {
private:
    string modello;

public:
    void impostaModello(string newModello) {
        modello = newModello;
    }
};

int main() {
    Automobile a;
    a.impostaMarca("Fiat");
    a.impostaModello("Panda");

    return 0;
}