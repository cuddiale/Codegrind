// Scrivi un programma che stampi la data e l'ora correnti.

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Ottieni il tempo corrente
    time_t tempoCorrente = time(0);

    // Converti il tempo corrente in una stringa
    char* dataOraStringa = ctime(&tempoCorrente);

    cout << "La data e l'ora correnti sono: " << dataOraStringa << endl;

    return 0;
}