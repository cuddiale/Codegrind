// Chiedi all'utente di inserire un anno e stampa se è valido (compreso tra 1900 e 2099) utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int anno;
    cout << "Inserisci un anno: ";
    cin >> anno;

    string risultato = (anno >= 1900 && anno <= 2099) ? "L'anno è valido." : "L'anno non è valido.";
    cout << risultato << endl;

    return 0;
}