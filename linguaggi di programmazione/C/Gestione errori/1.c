// Gestire l'errore durante l'apertura di un file.

#include <stdio.h>

int main() {
    FILE *file = fopen("testo.txt", "r");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    fclose(file);
    return 0;
}