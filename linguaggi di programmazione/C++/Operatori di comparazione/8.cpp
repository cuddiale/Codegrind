// Scrivi un programma che confronti due stringhe e stampi "Vero" se la prima stringa è maggiore della seconda, altrimenti stampi "Falso".

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Zebra";
    string str2 = "Ape";

    cout << ((str1 > str2) ? "Vero" : "Falso") << endl;

    return 0;
}
