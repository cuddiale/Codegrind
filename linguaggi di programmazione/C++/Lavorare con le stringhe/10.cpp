// Scrivi un programma che dichiara una stringa e verifica se contiene una determinata sottostringa. Infine, stampa "Contiene la sottostringa" o "Non contiene la sottostringa" a seconda del risultato.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "Ciao mondo";
    string sottostringa = "mon";

    if (testo.find(sottostringa) != string::npos) {
        cout << "La stringa contiene la sottostringa" << endl;
    } else {
        cout << "La stringa non contiene la sottostringa" << endl;
    }

    return 0;
}
