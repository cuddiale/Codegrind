// Definisci un enum in C++ che rappresenti i giorni della settimana. Scansiona un valore intero da input e verifica se corrisponde a un giorno lavorativo o a un giorno festivo.

#include <iostream>
using namespace std;

enum GiorniSettimana {
    Lunedi,
    Martedi,
    Mercoledi,
    Giovedi,
    Venerdi,
    Sabato,
    Domenica
};

int main() {
    int giorno;
    cout << "Inserisci un numero da 1 a 7: ";
    cin >> giorno;

    if (giorno >= Lunedi && giorno <= Domenica) {
        if (giorno >= Lunedi && giorno <= Venerdi) {
            cout << "Giorno lavorativo" << endl;
        } else {
            cout << "Giorno festivo" << endl;
        }
    } else {
        cout << "Numero non valido" << endl;
    }

    return 0;
}
