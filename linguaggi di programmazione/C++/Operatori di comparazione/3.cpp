// Scrivi un programma che confronti due caratteri e stampi "Vero" se il primo carattere è minore del secondo, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    char c1 = 'a';
    char c2 = 'z';

    cout << ((c1 < c2) ? "Vero" : "Falso") << endl;

    return 0;
}