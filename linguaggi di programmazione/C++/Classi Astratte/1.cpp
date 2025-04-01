// Crea una classe astratta Figura con un metodo virtuale puro calcolaArea che calcola e restituisce l'area della figura.

#include <iostream>
using namespace std;

class Figura {
public:
    virtual double calcolaArea() = 0;
};

int main() {
    // Figura f; // Errore: impossibile istanziare una classe astratta

    return 0;
}