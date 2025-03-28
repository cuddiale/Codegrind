// Calcola la somma dei numeri da 1 a 100, escludendo i multipli di 3, utilizzando l'istruzione "continue" con il ciclo for:

#include <iostream>
using namespace std;

int main() {
    int somma = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0)
            continue;
        somma += i;
    }

    cout << "La somma dei numeri da 1 a 100, escludendo i multipli di 3, è: " << somma << endl;

    return 0;
}
