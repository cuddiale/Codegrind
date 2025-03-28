// Scrivi un programma che dichiara due stringhe e le concatena in una terza stringa. Infine, stampa la stringa risultante.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string primaStringa = "Ciao";
    string secondaStringa = "Mondo";
    string terzaStringa;

    terzaStringa = primaStringa + " " + secondaStringa;

    cout << "La stringa risultante è: " << terzaStringa << endl;

    return 0;
}