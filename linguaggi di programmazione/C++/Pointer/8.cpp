// Dichiarare un puntatore a float e assegnargli l'indirizzo di una variabile float. Stampare il valore della variabile tramite il puntatore con una precisione di due decimali.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valore = 3.14159;
    float* puntatore = &valore;

    cout << "Valore della variabile: " << fixed << setprecision(2) << *puntatore << endl;

    return 0;
}