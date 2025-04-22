// Passare un argomento a un thread e stamparlo.

#include <stdio.h>
#include <pthread.h>

void* stampa_numero(void* arg) {
    int numero = *((int*)arg);
    printf("Numero passato al thread: %d\n", numero);
    return NULL;
}

int main() {
    pthread_t thread;
    int numero = 42;
    pthread_create(&thread, NULL, stampa_numero, &numero);
    pthread_join(thread, NULL);
    return 0;
}