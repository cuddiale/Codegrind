// Scrivi un programma che calcoli l'età di una persona a partire dalla sua data di nascita nel formato "gg/mm/aaaa".

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string dataNascita;

    cout << "Inserisci la data di nascita nel formato gg/mm/aaaa: ";
    cin >> dataNascita;

    // Ottieni il tempo corrente
    time_t tempoCorrente = time(0);

    // Converti la data di nascita in una struttura tm
    struct tm tmNascita = {};
    strptime(dataNascita.c_str(), "%d/%m/%Y", &tmNascita);

    // Converti la struttura tm in time_t
    time_t tempoNascita = mktime(&tmNascita);

    // Calcola la differenza in secondi tra la data di nascita e il tempo corrente
    double differenzaSecondi = difftime(tempoCorrente, tempoNascita);

    // Calcola l'età in anni
    int etaAnni = differenzaSecondi / (60 * 60 * 24 * 365.25);

    cout << "L'età è: " << etaAnni << " anni" << endl;

    return 0;
}
