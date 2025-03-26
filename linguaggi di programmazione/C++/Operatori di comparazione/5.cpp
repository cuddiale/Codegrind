// Scrivi un programma che confronti due numeri interi e stampi "Vero" se il primo numero è minore o uguale al secondo, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 5;

    cout << ((num1 <= num2) ? "Vero" : "Falso") << endl;

    return 0;
}
