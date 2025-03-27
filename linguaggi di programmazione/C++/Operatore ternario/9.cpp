// Chiedi all'utente di inserire tre numeri interi e calcola la somma dei numeri positivi utilizzando l'operatore ternario.

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;
    cout << "Inserisci il primo numero: ";
    cin >> numero1;
    cout << "Inserisci il secondo numero: ";
    cin >> numero2;
    cout << "Inserisci il terzo numero: ";
    cin >> numero3;

    int sommaPositivi = (numero1 > 0 ? numero1 : 0) + (numero2 > 0 ? numero2 : 0) + (numero3 > 0 ? numero3 : 0);
    cout << "La somma dei numeri positivi è " << sommaPositivi << endl;

    return 0;
}