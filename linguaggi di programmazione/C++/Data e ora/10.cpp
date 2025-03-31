// Scrivi un programma che stampi l'ora corrente in un formato personalizzato utilizzando la libreria iomanip.

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    // Ottieni il tempo corrente
    time_t tempoCorrente = time(0);

    // Converti il tempo corrente in una struttura tm
    struct tm* tmCorrente = localtime(&tempoCorrente);

    // Stampa l'ora corrente in un formato personalizzato
    cout << "Ora corrente: " << setw(2) << setfill('0') << tmCorrente->tm_hour << ":"
         << setw(2) << setfill('0') << tmCorrente->tm_min << ":"
         << setw(2) << setfill('0') << tmCorrente->tm_sec << endl;

    return 0;
}
