#include "calcolatore_cf.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Dizionario dei comuni e codici catastali (solo esempi, da completare)
typedef struct {
    char nome[50];
    char codice[5];
} Comune;

Comune comuni[] = {
    {"ROMA", "H501"},
    {"MILANO", "F205"},
    {"NAPOLI", "F839"},
    // Aggiungi altri comuni qui
};

char get_mese_codice(char mese) {
    switch (mese) {
        case '1': return 'A';
        case '2': return 'B';
        case '3': return 'C';
        case '4': return 'D';
        case '5': return 'E';
        case '6': return 'H';
        case '7': return 'L';
        case '8': return 'M';
        case '9': return 'P';
        case '10': return 'R';
        case '11': return 'S';
        case '12': return 'T';
        default: return ' ';
    }
}

void estrai_consonanti(char *input, char *output) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (!strchr("AEIOUaeiou", input[i])) {
            output[j++] = toupper(input[i]);
        }
    }
    output[j] = '\0';
}

void estrai_vocali(char *input, char *output) {
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (strchr("AEIOUaeiou", input[i])) {
            output[j++] = toupper(input[i]);
        }
    }
    output[j] = '\0';
}

void compila_nome_cognome(char *input, char *output, int is_nome) {
    char consonanti[50], vocali[50];
    estrai_consonanti(input, consonanti);
    estrai_vocali(input, vocali);

    if (is_nome && strlen(consonanti) > 3) {
        output[0] = consonanti[0];
        output[1] = consonanti[2];
        output[2] = consonanti[3];
    } else {
        snprintf(output, 4, "%-3.3s", strcat(consonanti, vocali));
    }
}

void calcola_codice_fiscale(char *nome, char *cognome, char *data_nascita, char sesso, char *comune, char *codice_fiscale) {
    char parte_cognome[4] = {0}, parte_nome[4] = {0}, parte_data[6] = {0}, parte_comune[5] = {0};
    int giorno, mese, anno;

    // Calcolo parte del cognome
    compila_nome_cognome(cognome, parte_cognome, 0);

    // Calcolo parte del nome
    compila_nome_cognome(nome, parte_nome, 1);

    // Calcolo parte della data di nascita e sesso
    sscanf(data_nascita, "%2d/%2d/%4d", &giorno, &mese, &anno);
    parte_data[0] = (anno / 10 % 10) + '0';
    parte_data[1] = (anno % 10) + '0';
    parte_data[2] = get_mese_codice(mese + '0');
    if (sesso == 'F') {
        giorno += 40;
    }
    snprintf(parte_data + 3, 3, "%02d", giorno);

    // Calcolo parte del comune
    for (int i = 0; i < sizeof(comuni) / sizeof(comuni[0]); i++) {
        if (strcmp(comune, comuni[i].nome) == 0) {
            strcpy(parte_comune, comuni[i].codice);
            break;
        }
    }

    // Concatenazione delle parti
    snprintf(codice_fiscale, 17, "%s%s%s%s", parte_cognome, parte_nome, parte_data, parte_comune);
}