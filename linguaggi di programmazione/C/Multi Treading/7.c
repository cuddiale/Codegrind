// Utilizzare una barrier per sincronizzare l'esecuzione di più thread.

#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 3

pthread_barrier_t barrier;

void* funzione(void* arg) {
    int thread_id = *((int*)arg);
    printf("Thread %d inizia a lavorare\n", thread_id);
    pthread_barrier_wait(&barrier);
    printf("Thread %d continua a lavorare dopo la barriera\n", thread_id);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    pthread_barrier_init(&barrier, NULL, NUM_THREADS);

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, funzione, &thread_ids[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    pthread_barrier_destroy(&barrier);

    return 0;
}