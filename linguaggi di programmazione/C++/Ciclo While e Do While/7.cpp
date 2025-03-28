// Chiedi all'utente di inserire un numero intero base e un esponente intero e calcola la potenza utilizzando un ciclo while.

#include <iostream>
using namespace std;

int main() {
    int base, esponente;
    cout << "Inserisci la base: ";
    cin >> base;
    cout << "Inserisci l'esponente: ";
    cin >> esponente;

    int risultato = 1;
    int i = 0;

    while (i < esponente) {
        risultato *= base;
        i++;
    }

    cout << "Il risultato della potenza è: " << risultato << endl;

    return 0;
}