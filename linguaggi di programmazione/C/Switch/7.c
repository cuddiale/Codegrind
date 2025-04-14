// Chiedere all'utente di inserire una temperatura e una lettera che indica l'unità di misura (C per Celsius, F per Fahrenheit) e convertire la temperatura nell'unità di misura opposta.

#include <stdio.h>

int main() {
    float temperatura;
    char unitaMisura;

    printf("Inserisci una temperatura: ");
    scanf("%f", &temperatura);

    printf("Inserisci l'unità di misura (C per Celsius, F per Fahrenheit): ");
    scanf(" %c", &unitaMisura);

    switch (unitaMisura) {
        case 'C':
            temperatura = (temperatura * 9 / 5) + 32;
            printf("La temperatura in Fahrenheit è: %.2f\n", temperatura);
            break;
        case 'F':
            temperatura = (temperatura - 32) * 5 / 9;
            printf("La temperatura in Celsius è: %.2f\n", temperatura);
            break;
        default:
            printf("Unità di misura non valida\n");
    }

    return 0;
}