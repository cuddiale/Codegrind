// Crea una classe base Figura con un membro protetto colore e un metodo pubblico impostaColore che imposta il colore della figura.

#include <iostream>
#include <string>
using namespace std;

class Figura {
protected:
    string colore;

public:
    void impostaColore(string newColore) {
        colore = newColore;
    }
};

int main() {
    Figura f;
    f.impostaColore("rosso");

    return 0;
}
