// Calcola la somma degli elementi di un array di numeri interi:

#include <iostream>
using namespace std;

int main() {
    int numeri[] = {5, 10, 15, 20, 25};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += numeri[i];
    }

    cout << "La somma degli elementi dell'array è: " << somma << endl;

    return 0;
}