// Scrivi un programma che dichiara una stringa e rimuove tutti gli spazi in essa contenuti. Infine, stampa la stringa senza spazi.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "Ciao mondo come stai?";

    testo.erase(remove(testo.begin(), testo.end(), ' '), testo.end());

    cout << "La stringa senza spazi è: " << testo << endl;

    return 0;
}
