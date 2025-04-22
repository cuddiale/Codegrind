// Verifica se una stringa è palindroma:

#include <stdio.h>
#include <string.h>

int isPalindroma(char stringa[]) {
    int lunghezza = strlen(stringa);

    for (int i = 0; i < lunghezza / 2; i++) {
        if (stringa[i] != stringa[lunghezza - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char stringa[100];

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    if (isPalindroma(stringa)) {
        printf("%s è una stringa palindroma.\n", stringa);
    } else {
        printf("%s non è una stringa palindroma.\n", stringa);
    }

    return 0;
}