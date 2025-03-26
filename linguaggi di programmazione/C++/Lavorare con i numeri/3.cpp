// Scrivi un programma in C++ che dichiara tre variabili intere di nome "numero1", "numero2" e "numero3" e assegna loro dei valori. Calcola la media dei tre numeri e stampa il risultato sulla console.

#include <iostream>
using namespace std;

int main() {
    int numero1 = 3;
    int numero2 = 5;
    int numero3 = 7;

    float media = (numero1 + numero2 + numero3) / 3.0;

    cout << "La media dei tre numeri è: " << media << endl;

    return 0;
}