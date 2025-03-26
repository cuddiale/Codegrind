// Scrivi un programma in C++ che dichiara due variabili float di nome "cateto1" e "cateto2" e assegna loro dei valori. Calcola l'ipotenusa di un triangolo rettangolo utilizzando la formula "sqrt(cateto1^2 + cateto2^2)" dalla libreria cmath e stampa il risultato sulla console.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cateto1 = 3.0;
    float cateto2 = 4.0;

    float ipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "L'ipotenusa del triangolo rettangolo è: " << ipotenusa << endl;

    return 0;
}
