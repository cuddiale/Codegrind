// Crea una classe derivata Cane dalla classe Animale e implementa il metodo emettiSuono per emettere i

#include <iostream>
#include <string>
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
    // ...

    return 0;
}