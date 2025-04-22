// Chiedere all'utente di inserire un nome e stampare un messaggio di benvenuto con il nome interpolato.

#include <stdio.h>

int main() {
    char nome[100];

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    printf("Benvenuto, %s!\n", nome);

    return 0;
}