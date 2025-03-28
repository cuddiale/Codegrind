// Calcola la media dei valori di un array di numeri interi:

#include <iostream>
using namespace std;

int main() {
    int numeri[] = {5, 10, 15, 20, 25};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += numeri[i];
    }

    double media = static_cast<double>(somma) / lunghezza;

    cout << "La media dei valori dell'array è: " << media << endl;

    return 0;
}
