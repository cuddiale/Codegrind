// Chiedi all'utente di inserire un anno e verifica se è bisestile, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int anno;
    cout << "Inserisci un anno: ";
    cin >> anno;

    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
        cout << "L'anno è bisestile." << endl;
    } else {
        cout << "L'anno non è bisestile." << endl;
    }

    return 0;
}
