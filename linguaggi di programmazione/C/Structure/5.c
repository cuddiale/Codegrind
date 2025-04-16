// Calcolo del totale di una fattura con più elementi usando una struttura "Prodotto":

#include <stdio.h>

struct Prodotto {
    char nome[50];
    float prezzo;
    int quantita;
};

float calcolaTotale(struct Prodotto prodotti[], int numProdotti) {
    float totale = 0;

    for (int i = 0; i < numProdotti; i++) {
        totale += prodotti[i].prezzo * prodotti[i].quantita;
    }

    return totale;
}

int main() {
    int numProdotti;

    printf("Inserisci il numero di prodotti: ");
    scanf("%d", &numProdotti);

    struct Prodotto prodotti[numProdotti];

    for (int i = 0; i < numProdotti; i++) {
        printf("Inserisci il nome del prodotto %d: ", i + 1);
        scanf("%s", prodotti[i].nome);

        printf("Inserisci il prezzo del prodotto %d: ", i + 1);
        scanf("%f", &prodotti[i].prezzo);

        printf("Inserisci la quantità del prodotto %d: ", i + 1);
        scanf("%d", &prodotti[i].quantita);
    }

    float totale = calcolaTotale(prodotti, numProdotti);

    printf("Il totale della fattura è: %.2f\n", totale);

    return 0;
}
