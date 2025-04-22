// Utilizzare un array di puntatori per memorizzare e stampare una lista di stringhe.

#include <stdio.h>

int main() {
    const char *nomi[] = {"Alice", "Bob", "Charlie"};
    for (int i = 0; i < 3; i++) {
        printf("%s\n", nomi[i]);
    }
    return 0;
}