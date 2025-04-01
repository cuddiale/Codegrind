// Crea un'interfaccia Veicolo con un metodo virtuale puro accelera che rappresenta l'azione di accelerazione del veicolo.

#include <iostream>
using namespace std;

class Veicolo {
public:
    virtual void accelera() = 0;
};

int main() {
    // Veicolo v; // Errore: impossibile istanziare un'interfaccia

    return 0;
}