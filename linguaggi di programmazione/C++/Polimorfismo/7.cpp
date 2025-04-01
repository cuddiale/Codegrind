// Crea una classe base Animale con un metodo virtuale emettiSuono che emette il suono dell'animale.

#include <iostream>
#include <string>
using namespace std;

class Animale {
public:
    virtual void emettiSuono() = 0;
};

int main() {
    Animale* a;
    // a = new Cane();
    // a = new Gatto();
    // ...

    return 0;
}
