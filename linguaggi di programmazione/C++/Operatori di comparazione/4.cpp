// Scrivi un programma che confronti due stringhe e stampi "Vero" se sono uguali, altrimenti stampi "Falso".

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Ciao";
    string str2 = "Ciao";

    cout << ((str1 == str2) ? "Vero" : "Falso") << endl;

    return 0;
}