// Scrivi un programma che stampi "Vero" se almeno uno dei valori booleani è vero, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    bool valore1 = true;
    bool valore2 = false;

    cout << ((valore1 || valore2) ? "Vero" : "Falso") << endl;

    return 0;
}