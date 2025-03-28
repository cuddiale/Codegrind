// Definisci un enum in C++ che rappresenti le operazioni matematiche (somma, sottrazione, moltiplicazione, divisione). Scrivi una funzione che, dato un valore numerico, restituisca il simbolo corrispondente all'operazione.

#include <iostream>
using namespace std;

enum OperazioniMatematiche {
    Somma,
    Sottrazione,
    Moltiplicazione,
    Divisione
};

char SimboloOperazione(int valore) {
    switch (valore) {
        case Somma:
            return '+';
        case Sottrazione:
            return '-';
        case Moltiplicazione:
            return '*';
        case Divisione:
            return '/';
        default:
            return '?';
    }
}

int main() {
    int valore = 2;
    char simbolo = SimboloOperazione(valore);
    cout << "Il valore " << valore << " corrisponde al simbolo: " << simbolo << endl;

    return 0;
}