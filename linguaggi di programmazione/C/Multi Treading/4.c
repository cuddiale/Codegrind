// Utilizzare un mutex per sincronizzare l'accesso a una variabile condivisa tra due thread.

#include <stdio.h>
#include <pthread.h>

int variabile_condivisa = 0;
pthread_mutex_t mutex;

void* incrementa(void* arg) {
    pthread_mutex_lock(&mutex);
    for (int i = 0; i < 100000; i++) {
        variabile_condivisa++;
    }
    pthread_mutex_unlock(&mutex);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_mutex_init(&mutex, NULL);

    pthread_create(&thread1, NULL, incrementa, NULL);
    pthread_create(&thread2, NULL, incrementa, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&mutex);

    printf("Valore finale della variabile condivisa: %d\n", variabile_condivisa);
    return 0;
}