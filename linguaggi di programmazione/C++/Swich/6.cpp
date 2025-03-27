// Chiedi all'utente di inserire un numero di mese e calcola il corrispondente numero di giorni utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    int mese;
    cout << "Inserisci un numero di mese (1-12): ";
    cin >> mese;

    int giorni;

    switch (mese) {
        case 2:
            giorni = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            giorni = 30;
            break;
        default:
            giorni = 31;
            break;
    }

    cout << "Il numero di giorni nel mese selezionato è: " << giorni << endl;

    return 0;
}