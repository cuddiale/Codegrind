// Dichiarare un puntatore a interi e assegnargli l'indirizzo di una variabile intera. Chiedere all'utente di inserire un nuovo valore tramite il puntatore e stampare il nuovo valore della variabile.

#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int* puntatore = &numero;

    cout << "Inserisci un nuovo valore: ";
    cin >> *puntatore;

    cout << "Nuovo valore della variabile: " << numero << endl;

    return 0;
}