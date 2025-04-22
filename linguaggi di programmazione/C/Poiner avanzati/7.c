// Utilizzare un puntatore per modificare i caratteri di una stringa.

#include <stdio.h>

int main() {
    char str[] = "Ciao, mondo!";
    char *ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'o') {
            *ptr = '0'; // Sostituisci 'o' con '0'
        }
        ptr++;
    }

    printf("Stringa modificata: %s\n", str);
    return 0;
}