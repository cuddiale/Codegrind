// Scrivi una funzione che prenda in input un numero intero e restituisca true se è un numero primo, altrimenti restituisca false.

#include <iostream>
using namespace std;

bool isPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int numero = 17;

    if (isPrimo(numero)) {
        cout << numero << " è un numero primo." << endl;
    } else {
        cout << numero << " non è un numero primo." << endl;
    }

    return 0;
}
