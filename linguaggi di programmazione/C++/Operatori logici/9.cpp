// Scrivi un programma che stampi "Vero" se il primo valore booleano è falso e il secondo valore booleano è falso, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    bool valore1 = false;
    bool valore2 = false;

    cout << ((!valore1 && !valore2) ? "Vero" : "Falso") << endl;

    return 0;
}