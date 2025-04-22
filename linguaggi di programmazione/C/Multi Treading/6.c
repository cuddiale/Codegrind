// Creare un semplice pool di thread per eseguire un insieme di lavori.

#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 3
#define NUM_TASKS 5

void* esegui_lavoro(void* arg) {
    int task_id = *((int*)arg);
    printf("Thread %lu esegue il task %d\n", pthread_self(), task_id);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int task_ids[NUM_TASKS];

    for (int i = 0; i < NUM_TASKS; i++) {
        task_ids[i] = i;
        pthread_create(&threads[i % NUM_THREADS], NULL, esegui_lavoro, &task_ids[i]);
        pthread_join(threads[i % NUM_THREADS], NULL);
    }

    return 0;
}