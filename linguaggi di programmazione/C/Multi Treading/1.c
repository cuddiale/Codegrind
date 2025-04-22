// Creare un thread e stamparne un messaggio.

#include <stdio.h>
#include <pthread.h>

void* stampa_messaggio(void* arg) {
    printf("Ciao dal thread!\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, stampa_messaggio, NULL);
    pthread_join(thread, NULL);
    return 0;
}