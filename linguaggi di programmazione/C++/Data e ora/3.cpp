// Scrivi un programma che calcoli il numero di giorni trascorsi tra due date inserite dall'utente nel formato "gg/mm/aaaa".

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string data1, data2;

    cout << "Inserisci la prima data nel formato gg/mm/aaaa: ";
    cin >> data1;

    cout << "Inserisci la seconda data nel formato gg/mm/aaaa: ";
    cin >> data2;

    // Converti le date in strutture tm
    struct tm tmData1 = {};
    struct tm tmData2 = {};
    strptime(data1.c_str(), "%d/%m/%Y", &tmData1);
    strptime(data2.c_str(), "%d/%m/%Y", &tmData2);

    // Converti le strutture tm in time_t
    time_t tempoData1 = mktime(&tmData1);
    time_t tempoData2 = mktime(&tmData2);

    // Calcola la differenza in secondi tra le due date
    double differenzaSecondi = difftime(tempoData2, tempoData1);

    // Calcola la differenza in giorni
    int differenzaGiorni = differenzaSecondi / (60 * 60 * 24);

    cout << "Numero di giorni trascorsi tra le due date: " << differenzaGiorni << endl;

    return 0;
}
// 