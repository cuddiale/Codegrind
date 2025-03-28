// Chiedi all'utente di inserire un numero intero positivo e calcola il suo fattoriale utilizzando un ciclo while.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int fattoriale = 1;
    int i = 1;

    while (i <= numero) {
        fattoriale *= i;
        i++;
    }

    cout << "Il fattoriale di " << numero << " è: " << fattoriale << endl;

    return 0;
}