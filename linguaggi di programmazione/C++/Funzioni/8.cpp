// Scrivi una funzione che prenda in input un array di caratteri e stampi tutti i caratteri in ordine inverso.

#include <iostream>
using namespace std;

void stampaInversa(char array[], int lunghezza) {
    for (int i = lunghezza - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }
}

int main() {
    const int NUM_CARATTERI = 5;
    char caratteri[NUM_CARATTERI] = {'A', 'B', 'C', 'D', 'E'};

    cout << "Caratteri in ordine inverso: ";
    stampaInversa(caratteri, NUM_CARATTERI);
    cout << endl;

    return 0;
}