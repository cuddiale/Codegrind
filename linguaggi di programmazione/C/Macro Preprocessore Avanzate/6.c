// Creare una macro per il rilascio della memoria e impostare il puntatore a NULL.

#include <stdio.h>
#include <stdlib.h>

#define FREE(ptr) do { free(ptr); ptr = NULL; } while (0)

int main() {
    int *p = (int *)malloc(sizeof(int) * 10);
    if (p == NULL) {
        perror("Errore di allocazione della memoria");
        return 1;
    }
    FREE(p);
    if (p == NULL) {
        printf("Puntatore impostato a NULL\n");
    }
    return 0;
}