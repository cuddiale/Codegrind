// Scrivi un programma che dichiara una stringa e converte tutti i caratteri in maiuscolo. Infine, stampa la stringa in maiuscolo.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string testo = "ciao mondo";

    for (int i = 0; i < testo.length(); i++) {
        testo[i] = toupper(testo[i]);
    }

    cout << "La stringa in maiuscolo è: " << testo << endl;

    return 0;
}