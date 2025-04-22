#include "decodificatore_cf.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Dizionario dei comuni e codici catastali (solo esempi, da completare)
typedef struct {
    char codice[5];
    char nome[50];
} Comune;

Comune comuni[] = {
    {"H501", "ROMA"},
    {"F205", "MILANO"},
    {"F839", "NAPOLI"},
    // Aggiungi altri comuni qui
};

void estrai_nome_cognome(const char *parte, char *output) {
    int j = 0;
    for (int i = 0; i < 3; i++) {
        if (isalpha(parte[i])) {
            output[j++] = parte[i];
        }
    }
    output[j] = '\0';
}

char* get_mese(char codice_mese) {
    switch (codice_mese) {
        case 'A': return "01";
        case 'B': return "02";
        case 'C': return "03";
        case 'D': return "04";
        case 'E': return "05";
        case 'H': return "06";
        case 'L': return "07";
        case 'M': return "08";
        case 'P': return "09";
        case 'R': return "10";
        case 'S': return "11";
        case 'T': return "12";
        default: return "00";
    }
}

void estrai_comune(const char *codice, char *output) {
    for (int i = 0; i < sizeof(comuni) / sizeof(comuni[0]); i++) {
        if (strcmp(codice, comuni[i].codice) == 0) {
            strcpy(output, comuni[i].nome);
            return;
        }
    }
    strcpy(output, "Comune sconosciuto");
}

void decodifica_codice_fiscale(const char *codice_fiscale, DatiPersonali *dati) {
    char giorno_str[3] = {0}, mese_str[3] = {0}, anno_str[3] = {0};
    int giorno, mese, anno;

    // Estrarre cognome e nome
    estrai_nome_cognome(codice_fiscale, dati->cognome);
    estrai_nome_cognome(codice_fiscale + 3, dati->nome);

    // Estrarre anno di nascita
    strncpy(anno_str, codice_fiscale + 6, 2);
    anno = atoi(anno_str);
    if (anno < 40) {
        anno += 2000;
    } else {
        anno += 1900;
    }

    // Estrarre mese di nascita
    strcpy(mese_str, get_mese(codice_fiscale[8]));

    // Estrarre giorno di nascita e sesso
    strncpy(giorno_str, codice_fiscale + 9, 2);
    giorno = atoi(giorno_str);
    if (giorno > 40) {
        dati->sesso = 'F';
        giorno -= 40;
    } else {
        dati->sesso = 'M';
    }

    snprintf(dati->data_nascita, sizeof(dati->data_nascita), "%02d/%02d/%04d", giorno, atoi(mese_str), anno);

    // Estrarre comune di nascita
    char codice_comune[5] = {0};
    strncpy(codice_comune, codice_fiscale + 11, 4);
    estrai_comune(codice_comune, dati->comune);
}