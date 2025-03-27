// Chiedi all'utente di inserire un voto compreso tra 0 e 100 e stampa se è valido utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int voto;
    cout << "Inserisci il voto: ";
    cin >> voto;

    string risultato = (voto >= 0 && voto <= 100) ? "Il voto è valido." : "Il voto non è valido.";
    cout << risultato << endl;

    return 0;
}