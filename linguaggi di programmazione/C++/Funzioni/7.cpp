// Scrivi una funzione che prenda in input due numeri float e restituisca il loro prodotto.

#include <iostream>
using namespace std;

float prodotto(float a, float b) {
    return a * b;
}

int main() {
    float num1 = 2.5;
    float num2 = 3.7;

    float risultato = prodotto(num1, num2);

    cout << "Il prodotto è: " << risultato << endl;

    return 0;
}