// Verifica se un numero è presente in un array di numeri interi:

#include <iostream>
using namespace std;

int main() {
    int numeri[] = {5, 10, 15, 20, 25};
    int lunghezza = sizeof(numeri) / sizeof(numeri[0]);
    int numeroDaTrovare = 15;
    bool presente = false;

    for (int i = 0; i < lunghezza; i++) {
        if (numeri[i] == numeroDaTrovare) {
            presente = true;
            break;
        }
    }

    if (presente) {
        cout << "Il numero " << numeroDaTrovare << " è presente nell'array." << endl;
    } else {
        cout << "Il numero " << numeroDaTrovare << " non è presente nell'array." << endl;
    }

    return 0;
}