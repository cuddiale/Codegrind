// Chiedi all'utente di inserire un numero intero e stampa se è divisibile per 3 e per 5 utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    string risultato = (numero % 3 == 0 && numero % 5 == 0) ? "Il numero è divisibile per 3 e per 5." : "Il numero non è divisibile per 3 e per 5.";
    cout << risultato << endl;

    return 0;
}