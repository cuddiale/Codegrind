// Convertire una stringa in un numero intero usando `stdlib.h`.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "1234";
    int num = atoi(str);
    printf("Il numero convertito è: %d\n", num);
    return 0;
}