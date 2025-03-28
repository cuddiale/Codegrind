// Calcola la media dei numeri inseriti dall'utente. Interrompi l'input quando l'utente inserisce un numero negativo utilizzando l'istruzione "break" con il ciclo while:

#include <iostream>
using namespace std;

int main() {
    int numero, somma = 0, conteggio = 0;

    while (true) {
        cout << "Inserisci un numero: ";
        cin >> numero;

        if (numero < 0)
            break;

        somma += numero;
        conteggio++;
    }

    if (conteggio > 0) {
        double media = static_cast<double>(somma) / conteggio;
        cout << "La media dei numeri inseriti è: " << media << endl;
    }
    else {
        cout << "Nessun numero inserito." << endl;
    }

    return 0;
}