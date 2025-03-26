// Scrivi un programma che confronti due caratteri e stampi "Vero" se il primo carattere è maggiore o uguale al secondo, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    char c1 = 'z';
    char c2 = 'a';

    cout << ((c1 >= c2) ? "Vero" : "Falso") << endl;

    return 0;
}