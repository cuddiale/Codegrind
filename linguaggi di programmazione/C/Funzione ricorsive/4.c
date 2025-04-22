// Scrivere una funzione ricorsiva per calcolare la somma degli elementi di un array.

#include <stdio.h>

int somma_array(int arr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return arr[n - 1] + somma_array(arr, n - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Somma degli elementi dell'array = %d\n", somma_array(arr, n));
    return 0;
}