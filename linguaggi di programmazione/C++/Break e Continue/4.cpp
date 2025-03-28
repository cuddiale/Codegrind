// Verifica se un numero inserito dall'utente è primo o composto utilizzando l'istruzione "break" con il ciclo for:

#include <iostream>
using namespace std;

int main() {
    int numero;
    bool isPrimo = true;

    cout << "Inserisci un numero: ";
    cin >> numero;

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            isPrimo = false;
            break;
        }
    }

    if (isPrimo)
        cout << "Il numero è primo." << endl;
    else
        cout << "Il numero è composto." << endl;

    return 0;
}