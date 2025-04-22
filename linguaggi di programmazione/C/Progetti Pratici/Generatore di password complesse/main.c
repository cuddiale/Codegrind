#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_LETTERS 26
#define NUM_DIGITS 10
#define NUM_SYMBOLS 10

const char letters_lower[NUM_LETTERS] = "abcdefghijklmnopqrstuvwxyz";
const char letters_upper[NUM_LETTERS] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char digits[NUM_DIGITS] = "0123456789";
const char symbols[NUM_SYMBOLS] = "!@#$%^&*()";

void genera_password(int lunghezza, char *password) {
    int i;
    for (i = 0; i < lunghezza; i++) {
        int tipo = rand() % 4;
        switch (tipo) {
            case 0:
                password[i] = letters_lower[rand() % NUM_LETTERS];
                break;
            case 1:
                password[i] = letters_upper[rand() % NUM_LETTERS];
                break;
            case 2:
                password[i] = digits[rand() % NUM_DIGITS];
                break;
            case 3:
                password[i] = symbols[rand() % NUM_SYMBOLS];
                break;
        }
    }
    password[lunghezza] = '\0';
}

int main() {
    int lunghezza;
    char password[100];

    srand(time(NULL));

    printf("Inserisci la lunghezza della password: ");
    scanf("%d", &lunghezza);

    if (lunghezza <= 0 || lunghezza >= 100) {
        printf("Lunghezza non valida. Deve essere compresa tra 1 e 99.\n");
        return 1;
    }

    genera_password(lunghezza, password);

    printf("Password generata: %s\n", password);

    return 0;
}