// Crea un'interfaccia Scrivibile con un metodo virtuale puro scrivi che rappresenta l'azione di scrittura di un contenuto.

#include <iostream>
using namespace std;

class Scrivibile {
public:
    virtual void scrivi() = 0;
};

int main() {
    // Scrivibile s; // Errore: impossibile istanziare un'interfaccia

    return 0;
}