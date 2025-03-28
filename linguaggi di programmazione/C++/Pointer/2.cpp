// Dichiarare un puntatore a caratteri e assegnargli l'indirizzo di una stringa. Successivamente, stampare la stringa tramite il puntatore.

#include <iostream>
using namespace std;

int main() {
    char* puntatore;
    char stringa[] = "Ciao Mondo";
    puntatore = stringa;

    cout << "Stringa: " << puntatore << endl;

    return 0;
}