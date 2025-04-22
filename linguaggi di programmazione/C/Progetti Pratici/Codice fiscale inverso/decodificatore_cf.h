#ifndef DECODIFICATORE_CF_H
#define DECODIFICATORE_CF_H

typedef struct {
    char nome[50];
    char cognome[50];
    char data_nascita[11];
    char sesso;
    char comune[50];
} DatiPersonali;

void decodifica_codice_fiscale(const char *codice_fiscale, DatiPersonali *dati);

#endif