#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

void leggi_csv(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Errore nell'apertura del file");
        return;
    }

    char linea[MAX_LINE_LENGTH];
    while (fgets(linea, sizeof(linea), file)) {
        printf("%s", linea);
    }

    fclose(file);
}

int main() {
    char filename[100];

    printf("Inserisci il percorso del file CSV: ");
    scanf("%s", filename);

    leggi_csv(filename);

    return 0;
}