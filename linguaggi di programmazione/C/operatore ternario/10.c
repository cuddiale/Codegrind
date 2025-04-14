// Chiedere all'utente di inserire la durata di una chiamata telefonica in minuti e calcolarne il costo, sapendo che ogni minuto costa 0.50 euro, utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int durataChiamata;
    float costoChiamata;

    printf("Inserisci la durata della chiamata telefonica in minuti: ");
    scanf("%d", &durataChiamata);

    costoChiamata = durataChiamata * 0.50;

    printf("Il costo della chiamata è: %.2f euro\n", costoChiamata);

    return 0;
}
