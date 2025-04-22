// Gestire l'errore durante l'allocazione di memoria dinamica.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 10);
    if (ptr == NULL) {
        perror("Errore di allocazione della memoria");
        return 1;
    }
    free(ptr);
    return 0;
}
