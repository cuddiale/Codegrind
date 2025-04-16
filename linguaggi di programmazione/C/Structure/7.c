// Definizione di una struttura "Automobile" e stampa dei dati:

#include <stdio.h>

struct Automobile {
    char marca[50];
    char modello[50];
    int anno;
};

int main() {
    struct Automobile automobile;

    printf("Inserisci la marca dell'automobile: ");
    scanf("%s", automobile.marca);

    printf("Inserisci il modello dell'automobile: ");
    scanf("%s", automobile.modello);

    printf("Inserisci l'anno di fabbricazione dell'automobile: ");
    scanf("%d", &automobile.anno);

    printf("Dati dell'automobile:\n");
    printf("Marca: %s\n", automobile.marca);
    printf("Modello: %s\n", automobile.modello);
    printf("Anno di fabbricazione: %d\n", automobile.anno);

    return 0;
}
