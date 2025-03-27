// Utilizza un ciclo for per calcolare la somma dei numeri da 1 a 100 e stampa il risultato.

#include <iostream>
using namespace std;

int main() {
    int somma = 0;

    for (int i = 1; i <= 100; i++) {
        somma += i;
    }

    cout << "La somma dei numeri da 1 a 100 è: " << somma << endl;

    return 0;
}