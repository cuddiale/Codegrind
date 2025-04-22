// Funzione per calcolare la lunghezza di una stringa usando puntatori:

#include <stdio.h>

int calcolaLunghezzaStringa(const char *stringa) {
    int lunghezza = 0;

    while (*stringa != '\0') {
        lunghezza++;
        stringa++;
    }

    return lunghezza;
}

int main() {
    char nome[] = "Ciao";

    int lunghezza = calcolaLunghezzaStringa(nome);

    printf("La lunghezza della stringa è: %d\n", lunghezza);

    return 0;
}