// Scrivi un programma in C++ che dichiara due variabili intere di nome "base" e "altezza" e assegna loro dei valori. Calcola l'area del rettangolo utilizzando la formula "base * altezza" e stampa il risultato sulla console.

#include <iostream>
using namespace std;

int main() {
    int base = 5;
    int altezza = 3;

    int area = base * altezza;

    cout << "L'area del rettangolo è: " << area << endl;

    return 0;
}