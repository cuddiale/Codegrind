// Crea una classe astratta Animale con un metodo virtuale puro emettiSuono che emette il suono dell'animale.

#include <iostream>
using namespace std;

class Animale {
public:
    virtual void emettiSuono() = 0;
};

int main() {
    // Animale a; // Errore: impossibile istanziare una classe astratta

    return 0;
}