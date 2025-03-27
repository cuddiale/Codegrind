// Chiedi all'utente di inserire un anno e stampa se è bisestile utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int anno;
    cout << "Inserisci un anno: ";
    cin >> anno;

    string risultato = ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) ? "L'anno è bisestile." : "L'anno non è bisestile.";
    cout << risultato << endl;

    return 0;
}