// Scrivi un programma che calcoli la differenza in ore, minuti e secondi tra due orari inseriti dall'utente nel formato "hh:mm:ss".

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string orario1, orario2;

    cout << "Inserisci il primo orario nel formato hh:mm:ss: ";
    cin >> orario1;

    cout << "Inserisci il secondo orario nel formato hh:mm:ss: ";
    cin >> orario2;

    // Converti gli orari in strutture tm
    struct tm tmOrario1 = {};
    struct tm tmOrario2 = {};
    strptime(orario1.c_str(), "%H:%M:%S", &tmOrario1);
    strptime(orario2.c_str(), "%H:%M:%S", &tmOrario2);

    // Converti le strutture tm in time_t
    time_t tempoOrario1 = mktime(&tmOrario1);
    time_t tempoOrario2 = mktime(&tmOrario2);

    // Calcola la differenza in secondi tra i due orari
    double differenzaSecondi = difftime(tempoOrario2, tempoOrario1);

    // Calcola la differenza in ore, minuti e secondi
    int ore = differenzaSecondi / (60 * 60);
    int minuti = (differenzaSecondi / 60) % 60;
    int secondi = differenzaSecondi % 60;

    cout << "La differenza tra i due orari è di: " << ore << " ore, " << minuti << " minuti, " << secondi << " secondi" << endl;

    return 0;
}