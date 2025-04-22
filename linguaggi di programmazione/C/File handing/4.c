// Copiare il contenuto di un file in un altro file.

#include <stdio.h>

int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dst = fopen("output.txt", "w");

    if (src == NULL || dst == NULL) {
        printf("Errore nell'apertura dei file\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), src)) {
        fputs(buffer, dst);
    }

    fclose(src);
    fclose(dst);
    return 0;
}