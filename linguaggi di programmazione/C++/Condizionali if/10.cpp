// Chiedi all'utente di inserire un numero intero e verifica se è divisibile per 3 e per 5, stampando il risultato.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    if (numero % 3 == 0 && numero % 5 == 0) {
        cout << "Il numero è divisibile per 3 e per 5." << endl;
    } else {
        cout << "Il numero non è divisibile per 3 e per 5." << endl;
    }

    return 0;
}
