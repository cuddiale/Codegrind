// Scrivi un programma che stampi il giorno della settimana corrente.

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Ottieni il tempo corrente
    time_t tempoCorrente = time(0);

    // Converti il tempo corrente in una struttura tm
    struct tm* tmCorrente = localtime(&tempoCorrente);

    // Ottieni il giorno della settimana corrente (da 0 a 6, dove 0 = Domenica)
    int giornoSettimana = tmCorrente->tm_wday;

    // Array con i nomi dei giorni della settimana
    string giorniSettimana[] = {"Domenica", "Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì", "Sabato"};

    cout << "Il giorno della settimana corrente è: " << giorniSettimana[giornoSettimana] << endl;

    return 0;
}