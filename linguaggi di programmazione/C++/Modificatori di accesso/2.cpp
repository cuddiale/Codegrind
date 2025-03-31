// Crea una classe Persona con un membro privato nome e un metodo pubblico stampaNome che stampa il nome della persona.

#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nome;

public:
    void stampaNome() {
        cout << "Il nome della persona è " << nome << "." << endl;
    }
};

int main() {
    Persona p;
    p.stampaNome();

    return 0;
}
