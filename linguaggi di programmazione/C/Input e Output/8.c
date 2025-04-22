// Scrivere e leggere dati binari in un file.

#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
} Record;

int main() {
    Record rec1 = {1, "Mario"};
    Record rec2;

    FILE *file = fopen("dati.bin", "wb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    fwrite(&rec1, sizeof(Record), 1, file);
    fclose(file);

    file = fopen("dati.bin", "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }

    fread(&rec2, sizeof(Record), 1, file);
    printf("ID: %d, Nome: %s\n", rec2.id, rec2.nome);
    fclose(file);

    return 0;
}