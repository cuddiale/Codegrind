// Scrivi un programma in C++ che dichiara una variabile intera di nome "numero" e assegna ad essa un valore. Calcola il valore assoluto del numero utilizzando la funzione abs() dalla libreria cmath e stampa il risultato sulla console.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero = -7;

    int valoreAssoluto = abs(numero);

    cout << "Il valore assoluto del numero è: " << valoreAssoluto << endl;

    return 0;
}