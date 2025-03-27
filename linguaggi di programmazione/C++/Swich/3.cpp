// Chiedi all'utente di inserire un verbo al presente indicativo e coniugalo al passato prossimo utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    string verbo;
    cout << "Inserisci un verbo al presente indicativo: ";
    cin >> verbo;

    string coniugazione;

    switch (verbo[verbo.length() - 1]) {
        case 'a':
            coniugazione = verbo.substr(0, verbo.length() - 1) + "ato";
            break;
        case 'e':
            coniugazione = verbo.substr(0, verbo.length() - 1) + "uto";
            break;
        case 'i':
            coniugazione = verbo.substr(0, verbo.length() - 1) + "ito";
            break;
        case 'o':
            coniugazione = verbo.substr(0, verbo.length() - 1) + "ato";
            break;
        default:
            cout << "Verbo non valido." << endl;
            return 0;
    }

    cout << "Il verbo al passato prossimo è: " << coniugazione << endl;

    return 0;
}
