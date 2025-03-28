// Controlla se un array di numeri interi è ordinato in modo crescente:

#include <iostream>
using namespace std;

bool isArrayOrdered(int array[], int lunghezza) {
    for (int i = 1; i < lunghezza; i++) {
        if (array[i] < array[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);

    if (isArrayOrdered(numeri, lunghezza)) {
        cout << "L'array è ordinato in modo crescente." << endl;
    } else {
        cout << "L'array non è ordinato in modo crescente." << endl;
    }

    return 0;
}
