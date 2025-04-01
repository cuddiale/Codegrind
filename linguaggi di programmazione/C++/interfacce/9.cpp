// Crea una classe Film che implementa l'interfaccia Distribuibile e implementa il metodo distribuisci per rappresentare la distribuzione di un film.

#include <iostream>
using namespace std;

class Distribuibile {
public:
    virtual void distribuisci() = 0;
};

class Film : public Distribuibile {
public:
    void distribuisci() override {
        cout << "Il film viene distribuito." << endl;
    }
};

int main() {
    Distribuibile* d = new Film();
    d->distribuisci();

    return 0;
}