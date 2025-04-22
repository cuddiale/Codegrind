// Allocare dinamicamente una stringa, assegnare un valore e deallocarla.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(50 * sizeof(char));
    if (str == NULL) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }
    strcpy(str, "Hello, world!");
    printf("Stringa: %s\n", str);
    free(str);
    printf("Memoria deallocata\n");
    return 0;
}