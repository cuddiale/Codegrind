// Definisci un enum in C++ che rappresenti i tipi di dati primitivi (intero, reale, carattere, booleano). Scrivi una funzione che, dato un tipo di dato, restituisca la sua dimensione in byte.

#include <iostream>
using namespace std;

enum TipiDati {
    Intero,
    Reale,
    Carattere,
    Booleano
};

int DimensioneTipoDato(TipiDati tipo) {
    switch (tipo) {
        case Intero:
            return sizeof(int);
        case Reale:
            return sizeof(float);
        case Carattere:
            return sizeof(char);
        case Booleano:
            return sizeof(bool);
        default:
            return -1;
    }
}

int main() {
    TipiDati tipo = Carattere;
    int dimensione = DimensioneTipoDato(tipo);
    if (dimensione != -1) {
        cout << "Il tipo di dato ha dimensione: " << dimensione << " byte" << endl;
    } else {
        cout << "Tipo di dato non valido" << endl;
    }

    return 0;
}