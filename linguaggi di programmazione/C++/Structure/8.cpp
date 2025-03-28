// Definisci una struttura "Prodotto" con i campi "nome", "prezzo" e "quantità" e calcola il totale di spesa per un elenco di prodotti:

#include <iostream>
using namespace std;

struct Prodotto {
    string nome;
    double prezzo;
    int quantita;
};

double calcolaTotale(Prodotto prodotti[], int lunghezza) {
    double totale = 0;

    for (int i = 0; i < lunghezza; i++) {
        totale += prodotti[i].prezzo * prodotti[i].quantita;
    }

    return totale;
}

int main() {
    const int NUM_PRODOTTI = 3;
    Prodotto listaProdotti[NUM_PRODOTTI];

    listaProdotti[0].nome = "Maglietta";
    listaProdotti[0].prezzo = 15.99;
    listaProdotti[0].quantita = 2;

    listaProdotti[1].nome = "Jeans";
    listaProdotti[1].prezzo = 49.99;
    listaProdotti[1].quantita = 1;

    listaProdotti[2].nome = "Scarpe";
    listaProdotti[2].prezzo = 79.99;
    listaProdotti[2].quantita = 1;

    double totaleSpesa = calcolaTotale(listaProdotti, NUM_PRODOTTI);

    cout << "Totale spesa: " << totaleSpesa << endl;

    return 0;
}
