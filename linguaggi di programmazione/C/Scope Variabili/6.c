// Utilizzare variabili automatiche (comportamento predefinito).

#include <stdio.h>

void funzione() {
    auto int x = 10; // 'auto' è implicito e può essere omesso
    printf("Variabile automatica: %d\n", x);
}

int main() {
    funzione();
    return 0;
}