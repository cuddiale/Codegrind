// Chiedi all'utente di inserire un numero di mese e stampa il corrispondente nome del mese utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    int mese;
    cout << "Inserisci un numero di mese (1-12): ";
    cin >> mese;

    string nomeMese;

    switch (mese) {
        case 1:
            nomeMese = "Gennaio";
            break;
        case 2:
            nomeMese = "Febbraio";
            break;
        case 3:
            nomeMese = "Marzo";
            break;
        case 4:
            nomeMese = "Aprile";
            break;
        case 5:
            nomeMese = "Maggio";
            break;
        case 6:
            nomeMese = "Giugno";
            break;
        case 7:
            nomeMese = "Luglio";
            break;
        case 8:
            nomeMese = "Agosto";
            break;
        case 9:
            nomeMese = "Settembre";
            break;
        case 10:
            nomeMese = "Ottobre";
            break;
        case 11:
            nomeMese = "Novembre";
            break;
        case 12:
            nomeMese = "Dicembre";
            break;
        default:
            cout << "Numero di mese non valido." << endl;
            return 0;
    }

    cout << "Il nome del mese corrispondente è: " << nomeMese << endl;

    return 0;
}