// Trova il valore massimo in un array di numeri interi:

#include <iostream>
using namespace std;

int main() {
    int numeri[] = {5, 10, 15, 20, 25};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int massimo = numeri[0];

    for (int i = 1; i < lunghezza; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }

    cout << "Il valore massimo dell'array è: " << massimo << endl;

    return 0;
}