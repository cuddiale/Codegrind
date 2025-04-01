// Crea una classe derivata Studente dalla classe Persona con un membro privato matricola e un metodo pubblico impostaMatricola che imposta la matricola dello studente.

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

class Studente : public Persona {
private:
    string matricola;

public:
    void impostaMatricola(string newMatricola) {
        matricola = newMatricola;
    }
};

int main() {
    Studente s;
    s.impostaNome("Mario");
    s.impostaMatricola("12345");

    return 0;
}