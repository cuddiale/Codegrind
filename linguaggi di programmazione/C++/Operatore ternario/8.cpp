// Chiedi all'utente di inserire due numeri interi e stampa il maggiore utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    cout << "Inserisci il primo numero: ";
    cin >> numero1;
    cout << "Inserisci il secondo numero: ";
    cin >> numero2;

    int massimo = (numero1 > numero2) ? numero1 : numero2;
    cout << "Il massimo tra i due numeri è " << massimo << endl;

    return 0;
}