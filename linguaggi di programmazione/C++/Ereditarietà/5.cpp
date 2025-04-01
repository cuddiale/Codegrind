// Crea una classe base Animale con un membro protetto nome e un metodo pubblico impostaNome che imposta il nome dell'animale.

#include <iostream>
#include <string>
using namespace std;

class Animale {
protected:
    string nome;

public:
    void impostaNome(string newNome) {
        nome = newNome;
    }
};

int main() {
    Animale a;
    a.impostaNome("Fido");

    return 0;
}
