// Creare una macro per controllare le condizioni e stampare un messaggio di errore se la condizione non è soddisfatta.

#include <stdio.h>

#define CHECK(cond) do { if (!(cond)) printf("Errore: %s non soddisfatta in %s:%d\n", #cond, __FILE__, __LINE__); } while (0)

int main() {
    int x = 5;
    CHECK(x == 10);
    return 0;
}