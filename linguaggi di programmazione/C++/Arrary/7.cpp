// Copia gli elementi di un array in un altro array:

#include <iostream>
using namespace std;

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(array1) / sizeof(array1[0]);
    int array2[lunghezza];

    for (int i = 0; i < lunghezza; i++) {
        array2[i] = array1[i];
    }

    cout << "Elementi di array1: ";
    for (int i = 0; i < lunghezza; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Elementi di array2 (copia di array1): ";
    for (int i = 0; i < lunghezza; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    return 0;
}
