// Chiedi all'utente di inserire tre lati e verifica se è possibile formare un triangolo valido, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int lato1, lato2, lato3;
    cout << "Inserisci il primo lato: ";
    cin >> lato1;
    cout << "Inserisci il secondo lato: ";
    cin >> lato2;
    cout << "Inserisci il terzo lato: ";
    cin >> lato3;

    if (lato1 + lato2 > lato3 && lato2 + lato3 > lato1 && lato1 + lato3 > lato2) {
        cout << "È possibile formare un triangolo valido." << endl;
    } else {
        cout << "Non è possibile formare un triangolo valido." << endl;
    }

    return 0;
}
