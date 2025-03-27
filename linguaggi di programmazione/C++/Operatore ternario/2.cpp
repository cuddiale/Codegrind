// Chiedi all'utente di inserire la propria età e stampa se è maggiorenne o minorenne utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int eta;
    cout << "Inserisci la tua età: ";
    cin >> eta;

    string risultato = (eta >= 18) ? "Sei maggiorenne." : "Sei minorenne.";
    cout << risultato << endl;

    return 0;
}