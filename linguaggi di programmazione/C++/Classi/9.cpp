// Crea una classe Calcolatrice che rappresenti una calcolatrice con i metodi per eseguire le operazioni di somma, sottrazione, moltiplicazione e divisione tra due numeri.

#include <iostream>
using namespace std;

class Calcolatrice {
public:
    int somma(int a, int b) {
        return a + b;
    }

    int sottrazione(int a, int b) {
        return a - b;
    }

    int moltiplicazione(int a, int b) {
        return a * b;
    }

    double divisione(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            cout << "Errore: divisione per zero" << endl;
            return 0;
        }
    }
};

int main() {
    Calcolatrice calcolatrice;
    int a = 10;
    int b = 5;
    cout << "Somma: " << calcolatrice.somma(a, b) << endl;
    cout << "Sottrazione: " << calcolatrice.sottrazione(a, b) << endl;
    cout << "Moltiplicazione: " << calcolatrice.moltiplicazione(a, b) << endl;
    cout << "Divisione: " << calcolatrice.divisione(a, b) << endl;

    return 0;
}