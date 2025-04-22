// Leggere un file di testo riga per riga e stamparne il contenuto.

#include <stdio.h>

int main() {
    FILE *file = fopen("testo.txt", "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}