// Scrivi un programma che stampi "Vero" se almeno uno dei valori booleani è falso, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    bool valore1 = false;
    bool valore2 = true;

    cout << ((!valore1 || !valore2) ? "Vero" : "Falso") << endl;

    return 0;
}