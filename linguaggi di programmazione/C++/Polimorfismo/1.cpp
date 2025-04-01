// Crea una classe base Figura con un metodo virtuale puro calcolaArea che calcola e restituisce l'area della figura.

#include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcolaArea() = 0;
};

int main() {
    Figura* f;
    // f = new Quadrato();
    // f = new Cerchio();
    // ...

    return 0;
}