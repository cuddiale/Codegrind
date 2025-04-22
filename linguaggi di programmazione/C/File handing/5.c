// Contare il numero di linee in un file di testo.

#include <stdio.h>

int main() {
    FILE *file = fopen("testo.txt", "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    int count = 0;
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file)) {
        count++;
    }

    printf("Numero di linee: %d\n", count);
    fclose(file);
    return 0;
}