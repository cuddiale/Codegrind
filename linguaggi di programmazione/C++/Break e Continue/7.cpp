// Stampa i numeri dispari da 1 a 50, escludendo il numero 27, utilizzando l'istruzione "continue" con il ciclo do-while:

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        if (i == 27) {
            i++;
            continue;
        }
        cout << i << " ";
        i += 2;
    } while (i <= 50);

    return 0;
}