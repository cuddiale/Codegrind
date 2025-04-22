// Creare una macro per misurare il tempo di esecuzione di un blocco di codice.

#include <stdio.h>
#include <time.h>

#define TIME_BLOCK_START() clock_t start = clock()
#define TIME_BLOCK_END() do { clock_t end = clock(); printf("Tempo di esecuzione: %lf secondi\n", (double)(end - start) / CLOCKS_PER_SEC); } while (0)

int main() {
    TIME_BLOCK_START();
    for (volatile int i = 0; i < 1000000; ++i); // Codice di esempio
    TIME_BLOCK_END();
    return 0;
}