// Utilizzare una condition variable per sincronizzare due thread.

#include <stdio.h>
#include <pthread.h>

pthread_mutex_t mutex;
pthread_cond_t cond;
int pronto = 0;

void* produttore(void* arg) {
    pthread_mutex_lock(&mutex);
    pronto = 1;
    printf("Produttore: dato pronto\n");
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&mutex);
    return NULL;
}

void* consumatore(void* arg) {
    pthread_mutex_lock(&mutex);
    while (!pronto) {
        pthread_cond_wait(&cond, &mutex);
    }
    printf("Consumatore: dato ricevuto\n");
    pthread_mutex_unlock(&mutex);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_mutex_init(&mutex, NULL);
    pthread_cond_init(&cond, NULL);

    pthread_create(&thread1, NULL, produttore, NULL);
    pthread_create(&thread2, NULL, consumatore, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&mutex);
    pthread_cond_destroy(&cond);

    return 0;
}