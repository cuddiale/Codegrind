// Definisci un enum in C++ che rappresenti i mesi dell'anno. Scansiona due numeri interi da input che rappresentano due mesi e verifica se sono consecutivi.

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
    int mese1, mese2;
    cout << "Inserisci il primo mese (numero da 1 a 12): ";
    cin >> mese1;
    cout << "Inserisci il secondo mese (numero da 1 a 12): ";
    cin >> mese2;

    if ((mese1 >= Gennaio && mese1 <= Dicembre) && (mese2 >= Gennaio && mese2 <= Dicembre)) {
        if (mese2 == mese1 + 1 || (mese1 == Dicembre && mese2 == Gennaio)) {
            cout << "I mesi sono consecutivi" << endl;
        } else {
            cout << "I mesi non sono consecutivi" << endl;
        }
    } else {
        cout << "Numeri non validi" << endl;
    }

    return 0;
}
