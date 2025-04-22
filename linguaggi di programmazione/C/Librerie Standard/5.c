// Ottenere e stampare l'orario corrente usando `time.h`.

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);
    printf("L'orario corrente è: %s", ctime(&t));
    return 0;
}