// Utilizzare un puntatore a una variabile volatile per accedere a una variabile che può essere modificata da un'interruzione.

#include <stdio.h>

volatile int flag = 0;

void interrupt_handler() {
    flag = 1;
}

int main() {
    int *ptr = (int *)&flag;

    // Simulazione di un'interruzione
    interrupt_handler();

    if (*ptr) {
        printf("Interruzione rilevata!\n");
    }

    return 0;
}