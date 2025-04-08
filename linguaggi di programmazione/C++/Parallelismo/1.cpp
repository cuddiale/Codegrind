// Creare un programma che avvia un thread separato per stampare un messaggio.

#include <iostream>
#include <thread>

void stampaMessaggio() {
    std::cout << "Ciao dal thread!" << std::endl;
}

int main() {
    std::thread t(stampaMessaggio);
    t.join(); // Attende la terminazione del thread
    return 0;
}