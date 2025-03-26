// Scrivi un programma in C++ che dichiara una variabile float di nome "numero" e assegna ad essa un valore. Calcola la radice quadrata del numero utilizzando la funzione sqrt() dalla libreria cmath e stampa il risultato sulla console.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float numero = 16.0;

    float radiceQuadrata = sqrt(numero);

    cout << "La radice quadrata del numero è: " << radiceQuadrata << endl;

    return 0;
}