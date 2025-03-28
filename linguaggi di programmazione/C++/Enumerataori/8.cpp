// Definisci un enum in C++ che rappresenti le direzioni (su, giù, destra, sinistra). Stampa a schermo il nome della direzione corrispondente a un valore specifico.

#include <iostream>
using namespace std;

enum Direzioni {
    Su,
    Giu,
    Destra,
    Sinistra
};

int main() {
    Direzioni direzione = Sinistra;

    switch (direzione) {
        case Su:
            cout << "Su" << endl;
            break;
        case Giu:
            cout << "Giu" << endl;
            break;
        case Destra:
            cout << "Destra" << endl;
            break;
        case Sinistra:
            cout << "Sinistra" << endl;
            break;
        default:
            cout << "Valore non valido" << endl;
    }

    return 0;
}