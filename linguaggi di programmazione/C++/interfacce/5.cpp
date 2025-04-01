// Crea una classe Chitarra che implementa l'interfaccia Suonabile e implementa il metodo eseguiSuono per rappresentare l'esecuzione del suono di una chitarra.

#include <iostream>
using namespace std;

class Suonabile {
public:
    virtual void eseguiSuono() = 0;
};

class Chitarra : public Suonabile {
public:
    void eseguiSuono() override {
        cout << "La chitarra suona." << endl;
    }
};

int main() {
    Suonabile* s = new Chitarra();
    s->eseguiSuono();

    return 0;
}