// Definisci una struttura "Giocatore" con i campi "nome" e "punteggio" e crea un array di giocatori. Ordina l'array in base al punteggio:

#include <iostream>
#include <algorithm>
using namespace std;

struct Giocatore {
    string nome;
    int punteggio;
};

bool confrontaPunteggio(Giocatore giocatore1, Giocatore giocatore2) {
    return giocatore1.punteggio > giocatore2.punteggio;
}

int main() {
    const int NUM_GIOCATORI = 4;
    Giocatore squadra[NUM_GIOCATORI];

    squadra[0].nome = "Marco";
    squadra[0].punteggio = 120;

    squadra[1].nome = "Luca";
    squadra[1].punteggio = 80;

    squadra[2].nome = "Paolo";
    squadra[2].punteggio = 150;

    squadra[3].nome = "Giulia";
    squadra[3].punteggio = 100;

    sort(squadra, squadra + NUM_GIOCATORI, confrontaPunteggio);

    cout << "Classifica giocatori:" << endl;
    for (int i = 0; i < NUM_GIOCATORI; i++) {
        cout << "Giocatore " << i + 1 << ": " << squadra[i].nome << ", Punteggio: " << squadra[i].punteggio << endl;
    }

    return 0;
}