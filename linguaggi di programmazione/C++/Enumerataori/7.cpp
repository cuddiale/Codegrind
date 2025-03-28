// Definisci un enum in C++ che rappresenti i tipi di dati primitivi (intero, reale, carattere, booleano). Scansiona un valore intero da input e verifica se corrisponde a un tipo di dato valido.

#include <iostream>
using namespace std;

enum TipiDati {
    Intero,
    Reale,
    Carattere,
    Booleano
};

int main() {
    int valore;
    cout << "Inserisci un valore intero: ";
    cin >> valore;

    switch (valore) {
        case Intero:
            cout << "Tipo di dato: Intero" << endl;
            break;
        case Reale:
            cout << "Tipo di dato: Reale" << endl;
            break;
        case Carattere:
            cout << "Tipo di dato: Carattere" << endl;
            break;
        case Booleano:
            cout << "Tipo di dato: Booleano" << endl;
            break;
        default:
            cout << "Valore non valido" << endl;
    }

    return 0;
}