// Chiedi all'utente di inserire il numero di elementi della sequenza di Fibonacci da stampare e utilizza un ciclo for per generare e stampare la sequenza.

#include <iostream>
using namespace std;

int main() {
    int numeroElementi;
    cout << "Inserisci il numero di elementi della sequenza di Fibonacci da stampare: ";
    cin >> numeroElementi;

    int primoElemento = 0;
    int secondoElemento = 1;

    cout << primoElemento << " " << secondoElemento << " ";

    for (int i = 3; i <= numeroElementi; i++) {
        int nuovoElemento = primoElemento + secondoElemento;
        cout << nuovoElemento << " ";

        primoElemento = secondoElemento;
        secondoElemento = nuovoElemento;
    }

    return 0;
}