// Scrivi un programma che confronti due numeri interi e stampi "Vero" se il secondo numero è maggiore del primo, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 15;

    cout << ((num2 > num1) ? "Vero" : "Falso") << endl;

    return 0;
}