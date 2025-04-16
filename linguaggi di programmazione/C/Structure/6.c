// Definizione di una struttura "Studente" con voto e calcolo della media:

#include <stdio.h>

struct Studente {
    char nome[50];
    int eta;
    float voto;
};

float calcolaMedia(struct Studente studenti[], int numStudenti) {
    float sommaVoti = 0;

    for (int i = 0; i < numStudenti; i++) {
        sommaVoti += studenti[i].voto;
    }

    return sommaVoti / numStudenti;
}

int main() {
    int numStudenti;

    printf("Inserisci il numero di studenti: ");
    scanf("%d", &numStudenti);

    struct Studente studenti[numStudenti];

    for (int i = 0; i < numStudenti; i++) {
        printf("Inserisci il nome dello studente %d: ", i + 1);
        scanf("%s", studenti[i].nome);

        printf("Inserisci l'età dello studente %d: ", i + 1);
        scanf("%d", &studenti[i].eta);

        printf("Inserisci il voto dello studente %d: ", i + 1);
        scanf("%f", &studenti[i].voto);
    }

    float media = calcolaMedia(studenti, numStudenti);

    printf("La media dei voti degli studenti è: %.2f\n", media);

    return 0;
}