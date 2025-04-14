// Chiedere all'utente di inserire il peso in kg e l'altezza in metri e calcolare l'IMC utilizzando la formula IMC = peso / (altezza * altezza). In base all'IMC calcolato, stampare la categoria di peso corrispondente.

#include <stdio.h>

int main() {
    float peso, altezza, imc;

    printf("Inserisci il peso in kg: ");
    scanf("%f", &peso);

    printf("Inserisci l'altezza in metri: ");
    scanf("%f", &altezza);

    imc = peso / (altezza * altezza);

    switch ((int)imc) {
        case 0 ... 18:
            printf("Sottopeso\n");
            break;
        case 19 ... 24:
            printf("Normale\n");
            break;
        case 25 ... 29:
            printf("Sovrappeso\n");
            break;
        default:
            printf("Obeso\n");
    }

    return 0;
}