// Chiedi all'utente di inserire un numero intero base e un esponente intero e calcola la potenza utilizzando un ciclo for.

#include <iostream>
using namespace std;

int main() {
    int base, esponente;
    cout << "Inserisci la base: ";
    cin >> base;
    cout << "Inserisci l'esponente: ";
    cin >> esponente;

    int risultato = 1;

    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }

    cout << "Il risultato della potenza è: " << risultato << endl;

    return 0;
}