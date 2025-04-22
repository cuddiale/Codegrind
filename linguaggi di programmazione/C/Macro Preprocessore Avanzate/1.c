// Creare una macro per il logging con informazioni di file e linea.

#include <stdio.h>

#define LOG(msg) printf("LOG: %s - %s:%d\n", msg, __FILE__, __LINE__)

int main() {
    LOG("Inizio del programma");
    printf("Esempio di logging\n");
    LOG("Fine del programma");
    return 0;
}