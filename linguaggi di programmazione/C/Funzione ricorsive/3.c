// Scrivere una funzione ricorsiva per eseguire una ricerca binaria in un array ordinato.

#include <stdio.h>

int ricerca_binaria(int arr[], int sinistra, int destra, int x) {
    if (destra >= sinistra) {
        int medio = sinistra + (destra - sinistra) / 2;

        if (arr[medio] == x)
            return medio;

        if (arr[medio] > x)
            return ricerca_binaria(arr, sinistra, medio - 1, x);

        return ricerca_binaria(arr, medio + 1, destra, x);
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int risultato = ricerca_binaria(arr, 0, n - 1, x);
    if (risultato != -1)
        printf("Elemento trovato all'indice %d\n", risultato);
    else
        printf("Elemento non presente nell'array\n");
    return 0;
}