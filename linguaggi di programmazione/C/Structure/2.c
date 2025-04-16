// Calcolo dell'età media di un gruppo di persone:

#include <stdio.h>

struct Persona {
    char nome[20];
    int eta;
};

int main() {
    struct Persona persone[5];
    int sommaEta = 0;

    for (int i = 0; i < 5; i++) {
        printf("Inserisci il nome della persona %d: ", i + 1);
        scanf("%s", persone[i].nome);

        printf("Inserisci l'età della persona %d: ", i + 1);
        scanf("%d", &persone[i].eta);

        sommaEta += persone[i].eta;
    }

    float mediaEta = (float)sommaEta / 5;

    printf("L'età media del gruppo è: %.2f\n", mediaEta);

    return 0;
}