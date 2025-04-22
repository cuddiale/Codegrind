// Leggere una riga da un file e stamparla.

#include <stdio.h>

int main() {
    FILE *file = fopen("testo.txt", "r");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    char buffer[256];
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Contenuto del file: %s", buffer);
    }

    fclose(file);
    return 0;
}