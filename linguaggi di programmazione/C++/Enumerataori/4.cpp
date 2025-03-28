// Definisci un enum in C++ che rappresenti i tipi di carta da gioco (cuori, quadri, fiori, picche). Stampa a schermo il nome del tipo di carta corrispondente a un valore specifico.

#include <iostream>
using namespace std;

enum TipiCarte {
    Cuori,
    Quadri,
    Fiori,
    Picche
};

int main() {
    TipiCarte carta = Fiori;

    switch (carta) {
        case Cuori:
            cout << "Cuori" << endl;
            break;
        case Quadri:
            cout << "Quadri" << endl;
            break;
        case Fiori:
            cout << "Fiori" << endl;
            break;
        case Picche:
            cout << "Picche" << endl;
            break;
        default:
            cout << "Valore non valido" << endl;
    }

    return 0;
}