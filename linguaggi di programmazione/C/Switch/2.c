// Chiedere all'utente di inserire l'età e calcolare il costo del biglietto del cinema in base alla seguente tabella: Fino a 3 anni: gratuito Da 4 a 12 anni: 5 euro Da 13 a 17 anni: 8 euro Da 18 a 65 anni: 12 euro Oltre i 65 anni: 6 euro

#include <stdio.h>

int main() {
    int eta;
    float costoBiglietto;

    printf("Inserisci l'età: ");
    scanf("%d", &eta);

    switch (eta) {
        case 0 ... 3:
            costoBiglietto = 0;
            break;
        case 4 ... 12:
            costoBiglietto = 5;
            break;
        case 13 ... 17:
            costoBiglietto = 8;
            break;
        case 18 ... 65:
            costoBiglietto = 12;
            break;
        default:
            costoBiglietto = 6;
    }

    printf("Il costo del biglietto è: %.2f euro\n", costoBiglietto);

    return 0;
}