#include <stdio.h>
#include "decodificatore_cf.h"

int main() {
    char codice_fiscale[17];
    DatiPersonali dati;

    printf("Inserisci il codice fiscale: ");
    scanf("%s", codice_fiscale);

    if (strlen(codice_fiscale) != 16) {
        printf("Codice fiscale non valido. Deve essere di 16 caratteri.\n");
        return 1;
    }

    decodifica_codice_fiscale(codice_fiscale, &dati);

    printf("Nome: %s\n", dati.nome);
    printf("Cognome: %s\n", dati.cognome);
    printf("Data di nascita: %s\n", dati.data_nascita);
    printf("Sesso: %c\n", dati.sesso);
    printf("Comune di nascita: %s\n", dati.comune);

    return 0;
}