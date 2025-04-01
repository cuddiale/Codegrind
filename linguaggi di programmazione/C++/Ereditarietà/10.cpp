// Crea una classe derivata Libro dalla classe Prodotto con un membro privato autore e un metodo pubblico impostaAutore che imposta l'autore del libro.

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

class Libro : public Prodotto {
private:
    string autore;

public:
    void impostaAutore(string newAutore) {
        autore = newAutore;
    }
};

int main() {
    Libro l;
    l.impostaNome("Il Signore degli Anelli");
    l.impostaAutore("J.R.R. Tolkien");

    return 0;
}