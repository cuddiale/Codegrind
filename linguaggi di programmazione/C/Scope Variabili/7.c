// Dichiarare e utilizzare una variabile esterna in più file (dichiarazione separata).

#include <stdio.h>

extern int variabile_esterna;

void funzione() {
    printf("Variabile esterna: %d\n", variabile_esterna);
}

int main() {
    variabile_esterna = 30;
    funzione();
    return 0;
}