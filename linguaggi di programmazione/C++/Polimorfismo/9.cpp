// Crea una classe derivata Gatto dalla classe Animale e implementa il metodo emettiSuono per emettere il suono del gatto.

#include <iostream>
#include <string>
using namespace std;

class Animale {
public:
    virtual void emettiSuono() = 0;
};

class Gatto : public Animale {
public:
    void emettiSuono() override {
        cout << "Il gatto fa il miao." << endl;
    }
};

int main() {
    Animale* a = new Gatto();
    // ...

    return 0;
}