// Crea una classe Libro che implementa l'interfaccia Distribuibile e implementa il metodo distribuisci per rappresentare la distribuzione di un libro.

#include <iostream>
using namespace std;

class Distribuibile {
public:
    virtual void distribuisci() = 0;
};

class Libro : public Distribuibile {
public:
    void distribuisci() override {
        cout << "Il libro viene distribuito." << endl;
    }
};

int main() {
    Distribuibile* d = new Libro();
    d->distribuisci();

    return 0;
}