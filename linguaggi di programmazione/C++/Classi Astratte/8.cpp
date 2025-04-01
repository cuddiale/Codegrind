// Crea una classe derivata Chitarra dalla classe StrumentoMusicale e implementa il metodo eseguiSuono per eseguire il suono della chitarra.

#include <iostream>
using namespace std;

class StrumentoMusicale {
public:
    virtual void eseguiSuono() = 0;
};

class Chitarra : public StrumentoMusicale {
public:
    void eseguiSuono() override {
        cout << "Il suono della chitarra." << endl;
    }
};

int main() {
    StrumentoMusicale* s = new Chitarra();
    s->eseguiSuono();

    return 0;
}