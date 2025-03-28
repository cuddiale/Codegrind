// Chiedi all'utente di inserire un numero e stampa la sua tabellina da 1 a 10 utilizzando un ciclo while.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int i = 1;

    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }

    return 0;
}