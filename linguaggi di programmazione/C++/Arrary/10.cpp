// Calcola la somma di due array di numeri interi e salva il risultato in un terzo array:

#include <iostream>
using namespace std;

void sumArrays(int array1[], int array2[], int risultato[], int lunghezza) {
    for (int i = 0; i < lunghezza; i++) {
        risultato[i] = array1[i] + array2[i];
    }
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int lunghezza = sizeof(array1) / sizeof(array1[0]);
    int risultato[lunghezza];

    sumArrays(array1, array2, risultato, lunghezza);

    cout << "Array1: ";
    for (int i = 0; i < lunghezza; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Array2: ";
    for (int i = 0; i < lunghezza; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    cout << "Risultato della somma: ";
    for (int i = 0; i < lunghezza; i++) {
        cout << risultato[i] << " ";
    }
    cout << endl;

    return 0;
}