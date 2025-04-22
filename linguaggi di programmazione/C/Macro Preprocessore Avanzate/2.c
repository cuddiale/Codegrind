// Creare una macro variadica per il logging che accetti un formato e argomenti variabili.

#include <stdio.h>

#define LOG(fmt, ...) printf("LOG: %s:%d: " fmt "\n", __FILE__, __LINE__, __VA_ARGS__)

int main() {
    LOG("Valore di x: %d", 10);
    LOG("Stringa: %s, Valore di y: %f", "test", 3.14);
    return 0;
}