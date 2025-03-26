// Scrivi un programma che confronti due numeri in virgola mobile e stampi "Vero" se il secondo numero è minore del primo, altrimenti stampi "Falso".

#include <iostream>
using namespace std;

int main() {
    double num1 = 3.14;
    double num2 = 2.71;

    cout << ((num2 < num1) ? "Vero" : "Falso") << endl;

    return 0;
}