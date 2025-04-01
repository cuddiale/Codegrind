// Crea un'interfaccia Suonabile con un metodo virtuale puro eseguiSuono che rappresenta l'azione di esecuzione di un suono.

#include <iostream>
using namespace std;

class Suonabile {
public:
    virtual void eseguiSuono() = 0;
};

int main() {
    // Suonabile s; // Errore: impossibile istanziare un'interfaccia

    return 0;
}