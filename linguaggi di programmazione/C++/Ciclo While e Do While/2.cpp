// Utilizza un ciclo while per calcolare la somma dei numeri da 1 a 100 e stampa il risultato.

#include <iostream>
using namespace std;

int main() {
    int somma = 0;
    int i = 1;

    while (i <= 100) {
        somma += i;
        i++;
    }

    cout << "La somma dei numeri da 1 a 100 è: " << somma << endl;

    return 0;
}