// Scrivi un programma che dichiara una stringa e conta il numero di vocali presenti al suo interno. Infine, stampa il numero di vocali.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string testo = "ciao mondo";
    int contatore = 0;

    for (int i = 0; i < testo.length(); i++) {
        char carattere = tolower(testo[i]);
        if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u') {
            contatore++;
        }
    }

    cout << "Il numero di vocali nella stringa è: " << contatore << endl;

    return 0;
}
