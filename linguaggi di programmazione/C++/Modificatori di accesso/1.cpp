// Crea una classe Veicolo con un membro privato numeroRuote e un metodo pubblico stampaNumeroRuote che stampa il numero di ruote del veicolo.

#include <iostream>
using namespace std;

class Veicolo {
private:
    int numeroRuote;

public:
    void stampaNumeroRuote() {
        cout << "Il veicolo ha " << numeroRuote << " ruote." << endl;
    }
};

int main() {
    Veicolo v;
    v.stampaNumeroRuote();

    return 0;
}
