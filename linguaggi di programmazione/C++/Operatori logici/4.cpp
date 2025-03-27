// Scrivi un programma che stampi "Vero" se entrambi i valori booleani sono falsi, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    bool valore1 = false;
    bool valore2 = false;

    cout << ((!valore1 && !valore2) ? "Vero" : "Falso") << endl;

    return 0;
}
