// Scrivi un programma che stampi "Vero" se entrambi i valori booleani sono veri, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    bool valore1 = true;
    bool valore2 = true;

    cout << ((valore1 && valore2) ? "Vero" : "Falso") << endl;

    return 0;
}
