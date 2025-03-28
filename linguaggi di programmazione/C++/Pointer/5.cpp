// Dichiarare un puntatore a interi e assegnargli l'indirizzo di una variabile intera. Moltiplicare il valore della variabile per 2 tramite il puntatore e stamparne il risultato.

#include <iostream>
using namespace std;

int main() {
    int numero = 8;
    int* puntatore = &numero;

    *puntatore *= 2;

    cout << "Nuovo valore della variabile: " << numero << endl;

    return 0;
}
