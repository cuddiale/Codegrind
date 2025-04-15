
// Stampa dei caratteri di una stringa, saltando lo spazio utilizzando l'istruzione continue:

#include <stdio.h>

int main() {
    char stringa[] = "Ciao Mondo";
    int lunghezza = sizeof(stringa) / sizeof(stringa[0]);

    for (int i = 0; i < lunghezza; i++) {
        if (stringa[i] == ' ') {
            continue;
        }
        printf("%c ", stringa[i]);
    }

    return 0;
}