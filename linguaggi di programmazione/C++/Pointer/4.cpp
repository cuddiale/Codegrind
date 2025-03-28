// Dichiarare un puntatore a interi e assegnargli l'indirizzo di una variabile intera. Incrementare il valore della variabile tramite il puntatore e stamparne il risultato.

#include <iostream>
using namespace std;

int main() {
    int numero = 5;
    int* puntatore = &numero;

    (*puntatore)++;

    cout << "Nuovo valore della variabile: " << numero << endl;

    return 0;
}