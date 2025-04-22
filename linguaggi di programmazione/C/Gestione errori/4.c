// Gestire l'errore di accesso a un elemento di un array fuori dai limiti.

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int indice = 10;
    if (indice < 0 || indice >= 5) {
        fprintf(stderr, "Errore: indice fuori dai limiti\n");
        return 1;
    }
    printf("Elemento: %d\n", arr[indice]);
    return 0;
}