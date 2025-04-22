// Aggiungere una stringa alla fine di un file di testo esistente.

#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Errore nell'apertura del file\n");
        return 1;
    }

    fprintf(file, "Aggiunta di una nuova riga\n");
    fclose(file);
    return 0;
}