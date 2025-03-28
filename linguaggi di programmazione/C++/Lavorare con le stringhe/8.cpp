// Scrivi un programma che dichiara una stringa e verifica se termina con una determinata sottostringa. Infine, stampa "Termina con la sottostringa" o "Non termina con la sottostringa" a seconda del risultato.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "Ciao mondo";
    string sottostringa = "mondo";

    if (testo.rfind(sottostringa) == testo.length() - sottostringa.length()) {
        cout << "La stringa termina con la sottostringa" << endl;
    } else {
        cout << "La stringa non termina con la sottostringa" << endl;
    }

    return 0;
}