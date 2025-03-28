// Definisci una struttura "Studente" con i campi "nome", "età" e "voto" e calcola la media dei voti di un gruppo di studenti:

#include <iostream>
using namespace std;

struct Studente {
    string nome;
    int eta;
    double voto;
};

double calcolaMedia(Studente studenti[], int lunghezza) {
    double somma = 0;

    for (int i = 0; i < lunghezza; i++) {
        somma += studenti[i].voto;
    }

    return somma / lunghezza;
}

int main() {
    const int NUM_STUDENTI = 3;
    Studente studenti[NUM_STUDENTI];

    studenti[0].nome = "Marco";
    studenti[0].eta = 20;
    studenti[0].voto = 7.5;

    studenti[1].nome = "Paola";
    studenti[1].eta = 19;
    studenti[1].voto = 8.0;

    studenti[2].nome = "Luca";
    studenti[2].eta = 21;
    studenti[2].voto = 6.8;

    double media = calcolaMedia(studenti, NUM_STUDENTI);

    cout << "Media dei voti: " << media << endl;

    return 0;
}