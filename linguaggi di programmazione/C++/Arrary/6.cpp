// Trova il numero di occorrenze di un elemento in un array di numeri interi:

#include <iostream>
using namespace std;

int main() {
    int numeri[] = {5, 10, 5, 20, 5};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int numeroDaContare = 5;
    int conteggio = 0;

    for (int i = 0; i < lunghezza; i++) {
        if (numeri[i] == numeroDaContare) {
            conteggio++;
        }
    }

    cout << "Il numero " << numeroDaContare << " compare " << conteggio << " volte nell'array." << endl;

    return 0;
}