// Creare un programma che passa un argomento a un thread e lo stampa.

#include <iostream>
#include <thread>

void stampaValore(int val) {
    std::cout << "Valore: " << val << std::endl;
}

int main() {
    std::thread t(stampaValore, 42);
    t.join(); // Attende la terminazione del thread
    return 0;
}   t.join(); // Attende la terminazione del thread
    return 0;
}