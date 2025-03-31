// Crea una classe Rettangolo con membri privati base e altezza e un metodo pubblico calcolaArea che calcola e restituisce l'area del rettangolo.

#include <iostream>
using namespace std;

class Rettangolo {
private:
    double base;
    double altezza;

public:
    double calcolaArea() {
        return base * altezza;
    }
};

int main() {
    Rettangolo r;
    cout << "L'area del rettangolo è " << r.calcolaArea() << " metri quadrati." << endl;

    return 0;
}