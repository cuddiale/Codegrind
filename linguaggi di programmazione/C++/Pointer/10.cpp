// Dichiarare un puntatore a un array di caratteri e assegnargli l'indirizzo di una stringa. Verificare se la stringa è vuota tramite il puntatore e stampare un messaggio di conseguenza.

#include <iostream>
using namespace std;

int main() {
    char stringa[] = "";
    char* puntatore = stringa;

    if (*puntatore == '\0') {
        cout << "La stringa è vuota." << endl;
    } else {
        cout << "La stringa non è vuota." << endl;
    }

    return 0;
}