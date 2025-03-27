// Chiedi all'utente di inserire la propria età e verifica se è maggiore o uguale a 18, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int eta;
    cout << "Inserisci la tua età: ";
    cin >> eta;

    if (eta >= 18) {
        cout << "Sei maggiorenne." << endl;
    } else {
        cout << "Sei minorenne." << endl;
    }

    return 0;
}