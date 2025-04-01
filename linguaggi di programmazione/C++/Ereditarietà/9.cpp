// Crea una classe base Prodotto con membri protetti nome e prezzo e un metodo pubblico impostaNome che imposta il nome del prodotto.

#include <iostream>
#include <string>
using namespace std;

class Prodotto {
protected:
    string nome;
    double prezzo;

public:
    void impostaNome(string newNome) {
        nome = newNome;
    }
};

int main() {
    Prodotto p;
    p.impostaNome("Computer");

    return 0;
}