// Chiedi all'utente di inserire due numeri interi e determina il maggiore tra i due, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    cout << "Inserisci il primo numero: ";
    cin >> numero1;
    cout << "Inserisci il secondo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "Il primo numero è maggiore." << endl;
    } else if (numero2 > numero1) {
        cout << "Il secondo numero è maggiore." << endl;
    } else {
        cout << "I numeri sono uguali." << endl;
    }

    return 0;
}