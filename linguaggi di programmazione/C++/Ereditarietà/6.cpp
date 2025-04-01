// Crea una classe derivata Cane dalla classe Animale con un membro privato razza e un metodo pubblico impostaRazza che imposta la razza del cane.

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

class Cane : public Animale {
private:
    string razza;

public:
    void impostaRazza(string newRazza) {
        razza = newRazza;
    }
};

int main() {
    Cane c;
    c.impostaNome("Fido");
    c.impostaRazza("Labrador");

    return 0;
}