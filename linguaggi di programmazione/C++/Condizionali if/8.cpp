// Chiedi all'utente di inserire un numero intero e calcola il suo valore assoluto, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    int valoreAssoluto;
    if (numero < 0) {
        valoreAssoluto = -numero;
    } else {
        valoreAssoluto = numero;
    }

    cout << "Il valore assoluto del numero è " << valoreAssoluto << endl;

    return 0;
}