// Definizione di una struttura "Libro" e stampa dei dati:

#include <stdio.h>

struct Libro {
    char titolo[50];
    char autore[50];
    int annoPubblicazione;
};

int main() {
    struct Libro libro;

    printf("Inserisci il titolo del libro: ");
    scanf("%s", libro.titolo);

    printf("Inserisci l'autore del libro: ");
    scanf("%s", libro.autore);

    printf("Inserisci l'anno di pubblicazione del libro: ");
    scanf("%d", &libro.annoPubblicazione);

    printf("Dati del libro:\n");
    printf("Titolo: %s\n", libro.titolo);
    printf("Autore: %s\n", libro.autore);
    printf("Anno di pubblicazione: %d\n", libro.annoPubblicazione);

    return 0;
}
