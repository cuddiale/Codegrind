// Crea una classe derivata Pianoforte dalla classe StrumentoMusicale e implementa il metodo eseguiSuono per eseguire il suono del pianoforte.

#include <iostream>
using namespace std;

class StrumentoMusicale {
public:
    virtual void eseguiSuono() = 0;
};

class Pianoforte : public StrumentoMusicale {
public:
    void eseguiSuono() override {
        cout << "Il suono del pianoforte." << endl;
    }
};

int main() {
    StrumentoMusicale* s = new Pianoforte();
    s->eseguiSuono();

    return 0;
}