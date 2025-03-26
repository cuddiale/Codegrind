// Scrivi un programma in C++ che dichiara una costante float di nome "pi" e le assegna il valore 3.14159. Dichiarare una variabile float di nome "raggio" e assegna un valore. Calcola il volume della sfera utilizzando la formula "(4/3) * pi * raggio^3" e stampa il risultato sulla console.

#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14159;
    float raggio = 2.0;

    float volume = (4.0 / 3.0) * pi * raggio * raggio * raggio;

    cout << "Il volume della sfera è: " << volume << endl;

    return 0;
}
