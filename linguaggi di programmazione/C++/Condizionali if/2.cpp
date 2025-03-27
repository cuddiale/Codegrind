// Chiedi all'utente di inserire un numero intero e verifica se è positivo, negativo o zero, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "Il numero è positivo." << endl;
    } else if (numero < 0) {
        cout << "Il numero è negativo." << endl;
    } else {
        cout << "Il numero è zero." << endl;
    }

    return 0;
}