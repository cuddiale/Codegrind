// Crea una classe astratta Forma con un metodo virtuale puro disegna che disegna la forma.

#include <iostream>
using namespace std;

class Forma {
public:
    virtual void disegna() = 0;
};

int main() {
    // Forma f; // Errore: impossibile istanziare una classe astratta

    return 0;
}