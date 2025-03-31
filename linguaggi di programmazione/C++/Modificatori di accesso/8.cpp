// Crea una classe Studente con membri privati nome e voto e un metodo pubblico stampaVoto che stampa il voto dello studente.

#include <iostream>
#include <string>
using namespace std;

class Studente {
private:
    string nome;
    int voto;

public:
    void stampaVoto() {
        cout << "Lo studente " << nome << " ha preso il voto " << voto << "." << endl;
    }
};

int main() {
    Studente s;
    s.stampaVoto();

    return 0;
}