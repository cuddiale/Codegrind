// Scrivere una stringa in un file di testo.

#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    fprintf(file, "Ciao, mondo!\n");
    fclose(file);
    return 0;
}