// Scrivere più valori in un file.

#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(file, "Valore %d\n", i);
    }

    fclose(file);
    printf("Valori scritti nel file.\n");
    return 0;
}