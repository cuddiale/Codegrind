// Chiedi all'utente di inserire un numero intero e calcola il numero di cifre utilizzando un ciclo do-while.

#include <iostream>
using namespace std;

int main() {
    long long numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int conteggioCifre = 0;
    int numeroTemporaneo = numero;

    do {
        conteggioCifre++;
        numeroTemporaneo /= 10;
    } while (numeroTemporaneo != 0);

    cout << "Il numero di cifre di " << numero << " è: " << conteggioCifre << endl;

    return 0;
}
