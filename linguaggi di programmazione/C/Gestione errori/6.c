// Gestire l'errore durante la lettura di un file binario.

#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
} Record;

int main() {
    FILE *file = fopen("dati.bin", "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    Record rec;
    size_t result = fread(&rec, sizeof(Record), 1, file);
    if (result != 1) {
        if (feof(file)) {
            fprintf(stderr, "Errore: fine del file raggiunta inaspettatamente\n");
        } else {
            perror("Errore nella lettura del file");
        }
        fclose(file);
        return 1;
    }

    printf("ID: %d, Nome: %s\n", rec.id, rec.nome);
    fclose(file);
    return 0;
}