// Creare una macro per gestire gli errori durante l'apertura di un file.

#include <stdio.h>

#define OPEN_FILE(file, filename, mode) do { file = fopen(filename, mode); if (file == NULL) { perror("Errore nell'apertura del file"); return 1; } } while (0)

int main() {
    FILE *file;
    OPEN_FILE(file, "testo.txt", "r");
    // Esegui operazioni sul file
    fclose(file);
    return 0;
}