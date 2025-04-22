// Controllare se un carattere è alfabetico usando `ctype.h`.

#include <stdio.h>
#include <ctype.h>

int main() {
    char c = 'A';
    if (isalpha(c)) {
        printf("Il carattere '%c' è alfabetico\n", c);
    } else {
        printf("Il carattere '%c' non è alfabetico\n", c);
    }
    return 0;
}