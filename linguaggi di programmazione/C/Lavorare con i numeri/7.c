// Chiedere all'utente di inserire una temperatura in gradi Celsius e convertirla in gradi Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Inserisci la temperatura in gradi Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("La temperatura in gradi Fahrenheit è: %f\n", fahrenheit);

    return 0;
}