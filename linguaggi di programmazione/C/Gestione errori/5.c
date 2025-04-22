// Gestire l'errore durante la conversione di una stringa in numero.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = "123abc";
    char *endptr;
    long val = strtol(str, &endptr, 10);

    if (*endptr != '\0') {
        fprintf(stderr, "Errore: conversione non riuscita, carattere non numerico trovato: %c\n", *endptr);
        return 1;
    }

    printf("Numero convertito: %ld\n", val);
    return 0;
}