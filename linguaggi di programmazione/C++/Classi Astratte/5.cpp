// Crea una classe derivata Cane dalla classe Animale e implementa il metodo emettiSuono per emettere il suono del cane.

#include <iostream>
using namespace std;

class Animale {
public:
    virtual void emettiSuono() = 0;
};

class Cane : public Animale {
public:
    void emettiSuono() override {
        cout << "Il cane abbaia." << endl;
    }
};

int main() {
    Animale* a = new Cane();
    a->emettiSuono();

    return 0;
}