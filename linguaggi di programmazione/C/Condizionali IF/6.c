// Chiedere all'utente di inserire un anno e verificare se è un secolo (anno divisibile per 100).

#include <stdio.h>

int main() {
    int anno;

    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    if (anno % 100 == 0) {
        printf("L'anno è un secolo.\n");
    } else {
        printf("L'anno non è un secolo.\n");
    }

    return 0;
}
