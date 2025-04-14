// Chiedere all'utente di inserire un anno e verificare se è bisestile.

#include <stdio.h>

int main() {
    int anno;

    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        printf("L'anno è bisestile.\n");
    } else {
        printf("L'anno non è bisestile.\n");
    }

    return 0;
}