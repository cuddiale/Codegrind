// Definire un enum con valori personalizzati:

#include <stdio.h>

enum Colori {
    Rosso = 1,
    Verde = 5,
    Blu = 10
};

int main() {
    enum Colori colorePreferito = Verde;

    printf("Il mio colore preferito ha valore %d\n", colorePreferito);

    return 0;
}