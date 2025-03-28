// Stampa i numeri da 1 a 10, escludendo il numero 8, utilizzando l'istruzione "continue" con il ciclo for:

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 8)
            continue;
        cout << i << " ";
    }

    return 0;
}