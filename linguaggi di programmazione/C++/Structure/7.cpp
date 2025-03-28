// Definisci una struttura "Tempo" con i campi "ore", "minuti" e "secondi" e calcola la somma di due tempi:

#include <iostream>
using namespace std;

struct Tempo {
    int ore;
    int minuti;
    int secondi;
};

Tempo sommaTempi(Tempo tempo1, Tempo tempo2) {
    Tempo risultato;
    int totaleSecondi = tempo1.ore * 3600 + tempo1.minuti * 60 + tempo1.secondi +
                        tempo2.ore * 3600 + tempo2.minuti * 60 + tempo2.secondi;
    risultato.ore = totaleSecondi / 3600;
    risultato.minuti = (totaleSecondi % 3600) / 60;
    risultato.secondi = (totaleSecondi % 3600) % 60;
    return risultato;
}

int main() {
    Tempo tempo1 = {1, 30, 45};
    Tempo tempo2 = {0, 45, 30};

    Tempo risultato = sommaTempi(tempo1, tempo2);

    cout << "Somma dei tempi:" << endl;
    cout << "Ore: " << risultato.ore << endl;
    cout << "Minuti: " << risultato.minuti << endl;
    cout << "Secondi: " << risultato.secondi << endl;

    return 0;
}