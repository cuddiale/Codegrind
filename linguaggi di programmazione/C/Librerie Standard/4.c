// Copiare una stringa in un'altra usando `string.h`.

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Ciao, mondo!";
    char dest[50];
    strcpy(dest, src);
    printf("Stringa copiata: %s\n", dest);
    return 0;
}