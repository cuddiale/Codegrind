// Scrivi una funzione che prenda in input due numeri interi e restituisca la loro somma.

#include <iostream>
using namespace std;

int somma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;

    int risultato = somma(num1, num2);

    cout << "La somma è: " << risultato << endl;

    return 0;
}