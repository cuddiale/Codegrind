// Stampa i numeri pari da 1 a 20 utilizzando l'istruzione "continue" con il ciclo do-while:

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        if (i % 2 != 0) {
            i++;
            continue;
        }
        cout << i << " ";
        i++;
    } while (i <= 20);

    return 0;
}
