// Verifica se un anno è bisestile:

#include <stdio.h>

int isBisestile(int anno) {
    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int anno;

    printf("Inserisci un anno: ");
    scanf("%d", &anno);

    if (isBisestile(anno)) {
        printf("%d è un anno bisestile.\n", anno);
    } else {
        printf("%d non è un anno bisestile.\n", anno);
    }

    return 0;
}