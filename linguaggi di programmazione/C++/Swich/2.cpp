// Chiedi all'utente di inserire l'età e calcola il costo del biglietto del cinema utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    int eta;
    cout << "Inserisci la tua età: ";
    cin >> eta;

    double costoBiglietto;

    switch (eta) {
        case 0 ... 2:
            costoBiglietto = 0.0;
            break;
        case 3 ... 12:
            costoBiglietto = 5.0;
            break;
        case 13 ... 17:
            costoBiglietto = 7.5;
            break;
        default:
            costoBiglietto = 10.0;
            break;
    }

    cout << "Il costo del biglietto è: " << costoBiglietto << " euro." << endl;

    return 0;
}