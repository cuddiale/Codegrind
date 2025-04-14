// Chiedere all'utente di inserire un anno e verificare se è bisestile utilizzando l'operatore ternario.

#include <stdio.h>

int main() {
    int anno;

    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) ? printf("L'anno è bisestile.\n") : printf("L'anno non è bisestile.\n");

    return 0;
}