// Dichiarare un puntatore a interi e assegnargli l'indirizzo di una variabile intera. Successivamente, stampare il valore della variabile tramite il puntatore.

#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int* puntatore = &numero;

    cout << "Valore della variabile: " << *puntatore << endl;

    return 0;
}
