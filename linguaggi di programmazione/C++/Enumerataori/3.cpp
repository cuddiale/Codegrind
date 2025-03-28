// Definisci un enum in C++ che rappresenti i mesi dell'anno. Scansiona un intero da input e restituisci il nome del mese corrispondente.

#include <iostream>
using namespace std;

enum Mesi {
    Gennaio = 1,
    Febbraio,
    Marzo,
    Aprile,
    Maggio,
    Giugno,
    Luglio,
    Agosto,
    Settembre,
    Ottobre,
    Novembre,
    Dicembre
};

int main() {
    int numeroMese;
    cout << "Inserisci un numero da 1 a 12: ";
    cin >> numeroMese;

    if (numeroMese >= Gennaio && numeroMese <= Dicembre) {
        switch (numeroMese) {
            case Gennaio:
                cout << "Gennaio" << endl;
                break;
            case Febbraio:
                cout << "Febbraio" << endl;
                break;
            case Marzo:
                cout << "Marzo" << endl;
                break;
            case Aprile:
                cout << "Aprile" << endl;
                break;
            case Maggio:
                cout << "Maggio" << endl;
                break;
            case Giugno:
                cout << "Giugno" << endl;
                break;
            case Luglio:
                cout << "Luglio" << endl;
                break;
            case Agosto:
                cout << "Agosto" << endl;
                break;
            case Settembre:
                cout << "Settembre" << endl;
                break;
            case Ottobre:
                cout << "Ottobre" << endl;
                break;
            case Novembre:
                cout << "Novembre" << endl;
                break;
            case Dicembre:
                cout << "Dicembre" << endl;
                break;
        }
    } else {
        cout << "Numero non valido" << endl;
    }

    return 0;
}
