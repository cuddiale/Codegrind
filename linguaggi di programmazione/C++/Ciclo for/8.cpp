// Chiedi all'utente di inserire un numero e stampa la sua tabellina da 1 a 10 utilizzando un ciclo for.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
