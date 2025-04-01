// Crea un'interfaccia Distribuibile con un metodo virtuale puro distribuisci che rappresenta l'azione di distribuzione di un oggetto.

#include <iostream>
using namespace std;

class Distribuibile {
public:
    virtual void distribuisci() = 0;
};

int main() {
    // Distribuibile d; // Errore: impossibile istanziare un'interfaccia

    return 0;
}