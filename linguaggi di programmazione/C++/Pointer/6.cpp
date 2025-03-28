// Dichiarare un puntatore a caratteri e assegnargli l'indirizzo di una stringa. Stampare la lunghezza della stringa tramite il puntatore.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* puntatore;
    char stringa[] = "Hello";
    puntatore = stringa;

    int lunghezza = strlen(puntatore);

    cout << "Lunghezza della stringa: " << lunghezza << endl;

    return 0;
}