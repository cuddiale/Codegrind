// Scrivere una stringa in un file e poi leggerla usando `stdio.h`.

#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    fprintf(file, "Ciao, mondo!\n");
    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    char buffer[50];
    fgets(buffer, sizeof(buffer), file);
    printf("Contenuto del file: %s", buffer);
    fclose(file);

    return 0;
}