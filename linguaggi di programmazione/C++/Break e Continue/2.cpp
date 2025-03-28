// Calcola la somma dei numeri interi positivi inseriti dall'utente. Interrompi l'input quando l'utente inserisce un numero negativo utilizzando l'istruzione "break" con il ciclo while:

#include <iostream>
using namespace std;

int main() {
    int numero, somma = 0;

    while (true) {
        cout << "Inserisci un numero: ";
        cin >> numero;

        if (numero < 0)
            break;

        somma += numero;
    }

    cout << "La somma dei numeri positivi inseriti è: " << somma << endl;

    return 0;
}
