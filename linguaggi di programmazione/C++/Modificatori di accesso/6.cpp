// Crea una classe Impiegato con membri privati nome e stipendio e un metodo pubblico stampaStipendio che stampa lo stipendio dell'impiegato.

#include <iostream>
#include <string>
using namespace std;

class Impiegato {
private:
    string nome;
    double stipendio;

public:
    void stampaStipendio() {
        cout << "Lo stipendio dell'impiegato " << nome << " è " << stipendio << " euro." << endl;
    }
};

int main() {
    Impiegato i;
    i.stampaStipendio();

    return 0;
}