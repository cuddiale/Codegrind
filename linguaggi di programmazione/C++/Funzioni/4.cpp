// Scrivi una funzione che prenda in input un array di interi e il suo numero di elementi, e restituisca la somma di tutti gli elementi dell'array.

#include <iostream>
using namespace std;

int sommaArray(int array[], int lunghezza) {
    int somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += array[i];
    }

    return somma;
}

int main() {
    const int NUM_ELEMENTI = 5;
    int numeri[NUM_ELEMENTI] = {1, 2, 3, 4, 5};

    int risultato = sommaArray(numeri, NUM_ELEMENTI);

    cout << "La somma degli elementi dell'array è: " << risultato << endl;

    return 0;
}