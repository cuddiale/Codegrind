// Crea una classe Rettangolo che rappresenti un rettangolo nel piano cartesiano. Aggiungi i metodi per impostare le dimensioni del rettangolo, calcolarne l'area e il perimetro.

#include <iostream>
using namespace std;

class Rettangolo {
private:
    double base;
    double altezza;

public:
    void setDimensioni(double newBase, double newAltezza) {
        base = newBase;
        altezza = newAltezza;
    }

    double calcolaArea() {
        return base * altezza;
    }

    double calcolaPerimetro() {
        return 2 * (base + altezza);
    }
};

int main() {
    Rettangolo rettangolo;
    rettangolo.setDimensioni(5.0, 3.0);
    cout << "Area del rettangolo: " << rettangolo.calcolaArea() << endl;
    cout << "Perimetro del rettangolo: " << rettangolo.calcolaPerimetro() << endl;

    return 0;
}