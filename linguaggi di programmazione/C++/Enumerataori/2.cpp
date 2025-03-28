// Definisci un enum in C++ che rappresenti le stagioni dell'anno. Scrivi una funzione che, dato un valore numerico, restituisca la stagione corrispondente.

#include <iostream>
using namespace std;

enum Stagioni {
    Primavera = 1,
    Estate,
    Autunno,
    Inverno
};

string StagioneCorrispondente(int valore) {
    switch (valore) {
        case Primavera:
            return "Primavera";
        case Estate:
            return "Estate";
        case Autunno:
            return "Autunno";
        case Inverno:
            return "Inverno";
        default:
            return "Valore non valido";
    }
}

int main() {
    int valore = 3;
    string stagione = StagioneCorrispondente(valore);
    cout << "Il valore " << valore << " corrisponde alla stagione: " << stagione << endl;

    return 0;
}