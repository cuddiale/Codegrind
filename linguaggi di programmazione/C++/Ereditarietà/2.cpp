// Crea una classe derivata Cerchio dalla classe Figura con un membro privato raggio e un metodo pubblico calcolaArea che calcola e restituisce l'area del cerchio.

#include <iostream>
using namespace std;

class Figura {
protected:
    string colore;

public:
    void impostaColore(string newColore) {
        colore = newColore;
    }
};

class Cerchio : public Figura {
private:
    double raggio;

public:
    double calcolaArea() {
        return 3.14159 * raggio * raggio;
    }
};

int main() {
    Cerchio c;
    c.impostaColore("rosso");
    double area = c.calcolaArea();

    return 0;
}
