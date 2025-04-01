// Crea una classe base Persona con membri protetti nome e cognome e un metodo pubblico impostaNome che imposta il nome della persona.

#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nome;
    string cognome;

public:
    void impostaNome(string newNome) {
        nome = newNome;
    }
};

int main() {
    Persona p;
    p.impostaNome("Mario");

    return 0;
}
