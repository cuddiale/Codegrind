// Inverti l'ordine degli elementi in un array di numeri interi:

#include <iostream>
using namespace std;

int main() {
    int numeri[] = {5, 10, 15, 20, 25};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);

    cout << "Array originale: ";
    for (int i = 0; i < lunghezza; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < lunghezza / 2; i++) {
        int temp = numeri[i];
        numeri[i] = numeri[lunghezza - i - 1];
        numeri[lunghezza - i - 1] = temp;
    }

    cout << "Array invertito: ";
    for (int i = 0; i < lunghezza; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    return 0;
}