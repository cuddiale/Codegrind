// Copia di una stringa usando puntatori:

#include <stdio.h>

void copiaStringa(const char *sorgente, char *destinazione) {
    while (*sorgente != '\0') {
        *destinazione = *sorgente;
        sorgente++;
        destinazione++;
    }

    *destinazione = '\0';
}

int main() {
    char sorgente[] = "Ciao";
    char destinazione[10];

    copiaStringa(sorgente, destinazione);

    printf("La stringa copiata è: %s\n", destinazione);

    return 0;
}