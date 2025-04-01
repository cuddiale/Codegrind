// Crea una classe Pianoforte che implementa l'interfaccia Suonabile e implementa il metodo eseguiSuono per rappresentare l'esecuzione del suono di un pianoforte.

#include <iostream>
using namespace std;

class Suonabile {
public:
    virtual void eseguiSuono() = 0;
};

class Pianoforte : public Suonabile {
public:
    void eseguiSuono() override {
        cout << "Il pianoforte suona." << endl;
    }
};

int main() {
    Suonabile* s = new Pianoforte();
    s->eseguiSuono();

    return 0;
}