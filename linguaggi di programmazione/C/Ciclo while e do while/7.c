// Stampa dei caratteri di una stringa utilizzando un ciclo while:

#include <stdio.h>

int main() {
    char stringa[100];
    int i = 0;

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    while (stringa[i] != '\0') {
        printf("%c ", stringa[i]);
        i++;
    }

    return 0;
}
