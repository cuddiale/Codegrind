// Chiedi all'utente di inserire un numero da 1 a 7 e stampa il giorno corrispondente utilizzando il blocco switch.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero da 1 a 7: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "Lunedì" << endl;
            break;
        case 2:
            cout << "Martedì" << endl;
            break;
        case 3:
            cout << "Mercoledì" << endl;
            break;
        case 4:
            cout << "Giovedì" << endl;
            break;
        case 5:
            cout << "Venerdì" << endl;
            break;
        case 6:
            cout << "Sabato" << endl;
            break;
        case 7:
            cout << "Domenica" << endl;
            break;
        default:
            cout << "Numero non valido." << endl;
            break;
    }

    return 0;
}