// Gestire l'errore durante la chiusura di un file.

#include <stdio.h>

int main() {
    FILE *file = fopen("testo.txt", "r");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    if (fclose(file) != 0) {
        perror("Errore nella chiusura del file");
        return 1;
    }

    printf("File chiuso correttamente\n");
    return 0;
}