// Scrivi un programma che dichiara una stringa e sostituisce tutte le occorrenze di una determinata lettera con un'altra lettera. Infine, stampa la stringa risultante.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "ciao mondo";
    char letteraDaSostituire = 'o';
    char letteraDiSostituzione = 'a';

    for (int i = 0; i < testo.length(); i++) {
        if (testo[i] == letteraDaSostituire) {
            testo[i] = letteraDiSostituzione;
        }
    }

    cout << "La stringa risultante è: " << testo << endl;

    return 0;
}
