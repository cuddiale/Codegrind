// Stampa i numeri da 1 a 100. Quando il numero raggiunge 50, interrompi il ciclo utilizzando l'istruzione "break" con il ciclo while:

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 100) {
        cout << i << " ";

        if (i == 50)
            break;

        i++;
    }

    return 0;
}