// Definisci un enum in C++ che rappresenti i giorni della settimana. Stampa a schermo il nome del giorno corrispondente a un valore specifico.

#include <iostream>
using namespace std;

enum GiorniSettimana {
    Lunedi,
    Martedi,
    Mercoledi,
    Giovedi,
    Venerdi,
    Sabato,
    Domenica
};

int main() {
    GiorniSettimana giorno = Martedi;

    switch (giorno) {
        case Lunedi:
            cout << "Lunedì" << endl;
            break;
        case Martedi:
            cout << "Martedì" << endl;
            break;
        case Mercoledi:
            cout << "Mercoledì" << endl;
            break;
        case Giovedi:
            cout << "Giovedì" << endl;
            break;
        case Venerdi:
            cout << "Venerdì" << endl;
            break;
        case Sabato:
            cout << "Sabato" << endl;
            break;
        case Domenica:
            cout << "Domenica" << endl;
            break;
        default:
            cout << "Valore non valido" << endl;
    }

    return 0;
}
