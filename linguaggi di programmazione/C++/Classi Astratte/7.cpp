// Crea una classe astratta StrumentoMusicale con un metodo virtuale puro eseguiSuono che esegue un suono con lo strumento musicale.

#include <iostream>
using namespace std;

class StrumentoMusicale {
public:
    virtual void eseguiSuono() = 0;
};

int main() {
    // StrumentoMusicale s; // Errore: impossibile istanziare una classe astratta

    return 0;
}