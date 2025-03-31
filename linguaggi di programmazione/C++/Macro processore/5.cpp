// Definire una macro per il logging di messaggi di debug.

#include <iostream>

#define LOG(msg) std::cout << "LOG: " << msg << std::endl

int main() {
    LOG("Inizio del programma");
    // altre operazioni
    LOG("Fine del programma");
    return 0;
}