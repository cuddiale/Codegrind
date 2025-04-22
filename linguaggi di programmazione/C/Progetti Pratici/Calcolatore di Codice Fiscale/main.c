#include <stdio.h>
#include <stdlib.h>
#include "calcolatore_cf.h"

int main() {
    char nome[50], cognome[50], data_nascita[11], sesso, comune[50], codice_fiscale[17];

    printf("Inserisci il nome: ");
    scanf("%s", nome);

    printf("Inserisci il cognome: ");
    scanf("%s", cognome);

    printf("Inserisci la data di nascita (gg/mm/aaaa): ");
    scanf("%s", data_nascita);

    printf("Inserisci il sesso (M/F): ");
    scanf(" %c", &sesso);

    printf("Inserisci il comune di nascita: ");
    scanf("%s", comune);

    calcola_codice_fiscale(nome, cognome, data_nascita, sesso, comune, codice_fiscale);

    printf("Il codice fiscale calcolato è: %s\n", codice_fiscale);

    return 0;
}