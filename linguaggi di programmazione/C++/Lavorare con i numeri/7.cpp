// Scrivi un programma in C++ che dichiara una costante float di nome "pi" e le assegna il valore 3.14159. Dichiarare una variabile float di nome "raggio" e assegna un valore. Calcola il perimetro del cerchio utilizzando la formula "2 * pi * raggio" e stampa il risultato sulla console.

#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14159;
    float raggio = 4.5;

    float perimetro = 2 * pi * raggio;

    cout << "Il perimetro del cerchio è: " << perimetro << endl;

    return 0;
}