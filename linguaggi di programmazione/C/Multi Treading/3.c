// Creare più thread e stampare un messaggio da ciascuno di essi.

#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 5

void* stampa_messaggio(void* arg) {
    int thread_id = *((int*)arg);
    printf("Ciao dal thread %d!\n", thread_id);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, stampa_messaggio, &thread_ids[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}